void configServo(Servo &servo){
  servo.attach(pinServo);
  servo.write(90);
  delay(250);
}

