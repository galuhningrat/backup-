#include <Servo.h>
#include <Wire.h>
#include <Adafruit_INA219.h>

// Servo
Servo myservo;

// HC-SR04 ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Laser
const int laserPin = 12;

// INA219
Adafruit_INA219 ina219;

long duration;
float distance;
int servoSetting;
bool servoIncreasing = true;

void setup() {
  // Serial
  Serial.begin(115200);
  Serial.println("Radar and Battery Monitor");

  // Servo
  myservo.attach(11);
  myservo.write(0); // Initialize servo at angle 0

  // HC-SR04
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Laser
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, LOW); // Ensure the laser is off initially

  // INA219
  if (!ina219.begin()) {
    Serial.println("Failed to find INA219 chip");
    while (1) {
      delay(10);
    }
  } else {
    Serial.println("INA219 chip found");
  }
  ina219.setCalibration_32V_2A();
}

bool laserActive = false;
unsigned long laserStartTime = 0;
bool autoMode = false;
bool servoStopped = false;

void loop() {
  getDistance();
  readSerialCommand();
  outputDistance();

  if (distance < 50 && !laserActive) {
    activateLaser();
    Serial.println("LASER_ACTIVATED");
  } else if (laserActive && millis() - laserStartTime >= 2000) {
    deactivateLaser();
    Serial.println("LASER_DEACTIVATED");
  }

  if (!laserActive && !servoStopped) {
    if (autoMode) {
      updateServoAuto();
    }
  }

  sendBatteryData();
  delay(50);
}

void activateLaser() {
  laserActive = true;
  servoStopped = true;
  laserStartTime = millis();
  digitalWrite(laserPin, HIGH);
 //  myservo.write(myservo.read()); // Hentikan servo
}

void deactivateLaser() {
  laserActive = false;
  digitalWrite(laserPin, LOW);
  delay(1000); // Tunggu 1 detik sebelum melanjutkan operasi normal
  servoStopped = false;
}

void updateServoAuto() {
  if (servoIncreasing) {
    servoSetting += 2;
    if (servoSetting >= 180) {
      servoSetting = 180;
      servoIncreasing = false;
    }
  } else {
    servoSetting -= 2;
    if (servoSetting <= 0) {
      servoSetting = 0;
      servoIncreasing = true;
    }
  }
  myservo.write(servoSetting);
}

void readSerialCommand() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "AUTO") {
      autoMode = true;
    } else if (command == "MANUAL") {
      autoMode = false;
    } else if (command == "LASER_ON") {
      activateLaser();
    } else if (command == "LASER_OFF") {
      deactivateLaser();
    } else {
      int angle = command.toInt();
      if (angle >= 0 && angle <= 180 && !autoMode) {
        myservo.write(angle);
        servoSetting = angle;
      }
    }
  }
}

// Function to get distance from HC-SR04
void getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
}

// Function to output distance to Serial
void outputDistance() {
  Serial.print(servoSetting); // Send servo angle
  Serial.print(",");
  Serial.println(distance);   // Send distance
}

// Function to monitor battery parameters
void monitorBattery() {
  float shuntvoltage = 0;
  float busvoltage = 0;
  float current_mA = 0;
  float loadvoltage = 0;
  float power_mW = 0;

  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  power_mW = ina219.getPower_mW();
  loadvoltage = busvoltage + (shuntvoltage / 1000);

  Serial.print("Bus Voltage:   ");
  Serial.print(busvoltage);
  Serial.println(" V");
  Serial.print("Shunt Voltage: ");
  Serial.print(shuntvoltage);
  Serial.println(" mV");
  Serial.print("Load Voltage:  ");
  Serial.print(loadvoltage);
  Serial.println(" V");
  Serial.print("Current:       ");
  Serial.print(current_mA);
  Serial.println(" mA");
  Serial.print("Power:         ");
  Serial.print(power_mW);
  Serial.println(" mW");
  Serial.println("");
  

  delay(2000);
}

void sendBatteryData() {
  float shuntvoltage = ina219.getShuntVoltage_mV();
  float busvoltage = ina219.getBusVoltage_V();
  float current_mA = ina219.getCurrent_mA();
  float power_mW = ina219.getPower_mW();
  float loadvoltage = busvoltage + (shuntvoltage / 1000);

  Serial.print("B,");
  Serial.print(busvoltage);
  Serial.print(",");
  Serial.print(shuntvoltage);
  Serial.print(",");
  Serial.print(loadvoltage);
  Serial.print(",");
  Serial.print(current_mA);
  Serial.print(",");
  Serial.println(power_mW);
}