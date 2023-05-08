#include <Servo.h>
#include <math.h>
#include "Config.h"
#include "Motor.hpp"
#include "Servo.hpp"
#include "Ultrasound.hpp"
/**
  * README.txt
  **/
Servo servo;

void setup() {
  while (!Serial);
  Serial.begin(9600);
  configUltraSound();
  configMotorController();
  configServo(servo);
  test();
}

void loop() {
  /*
  forward();
  see();
  if (distancias[2] < 20 && abs(distancias[2] - lastDistance) < 10) {
    right();
    delay(500);
  }
  lastDistance = distancias[2];
*/
}