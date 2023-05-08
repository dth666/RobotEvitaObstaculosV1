void configMotorController(){
  pinMode(pin1MotorA, OUTPUT);
  pinMode(pin2MotorA, OUTPUT);
  pinMode(pin1MotorB, OUTPUT);
  pinMode(pin2MotorB, OUTPUT);
  pinMode(pinVelocidadMotorRight, OUTPUT);
  pinMode(pinVelocidadMotorLeft, OUTPUT);
  analogWrite(pinVelocidadMotorRight, 0);
  analogWrite(pinVelocidadMotorLeft, 0);
}

void controlWheel(Direction wheel, Direction sentido, int speed) {
  Serial.print("Control llanta ");
  switch(wheel){
    case RIGHT:
    Serial.print("derecha ");
    if (sentido == Direction::BACKWARD) {
      Serial.print("atrás ");
      digitalWrite(pin1MotorA, HIGH);
      digitalWrite(pin2MotorA, LOW);
    } else if (sentido == Direction::FORWARD) {
      Serial.print("adelante ");
      digitalWrite(pin1MotorA, LOW);
      digitalWrite(pin2MotorA, HIGH);
    }
    Serial.println(speed);
    analogWrite(pinVelocidadMotorRight, speed);
    break;
    case LEFT:
    Serial.print("izquierda ");
    if (sentido == Direction::BACKWARD) {
      Serial.print("atras ");
      digitalWrite(pin1MotorB, HIGH);
      digitalWrite(pin2MotorB, LOW);
    } else if (sentido == Direction::FORWARD) {
      Serial.print("adelante ");
      digitalWrite(pin1MotorB, LOW);
      digitalWrite(pin2MotorB, HIGH);
    }
    Serial.println(speed);
    analogWrite(pinVelocidadMotorLeft, speed);
    break;
  }  
}

void stop() {
  Serial.println("[x]");
  controlWheel(Direction::RIGHT, Direction::FORWARD,0);
  controlWheel(Direction::LEFT, Direction::FORWARD,0);
  /*digitalWrite(pin1MotorA, LOW);
  digitalWrite(pin2MotorA, LOW);
  digitalWrite(pin1MotorB, LOW);
  digitalWrite(pin2MotorB, LOW);*/
}

void forward() {
  Serial.println("[^]");
  controlWheel(Direction::RIGHT, Direction::FORWARD,255);
  controlWheel(Direction::LEFT, Direction::FORWARD,255);
}

void backward() {
  Serial.println("[v]");
  controlWheel(Direction::RIGHT, Direction::BACKWARD,255);
  controlWheel(Direction::LEFT, Direction::BACKWARD,255);
}

void right() {
  Serial.println("[>]");
  controlWheel(Direction::RIGHT, Direction::BACKWARD,255);
  controlWheel(Direction::LEFT, Direction::FORWARD,255);
}

void left() {
  Serial.println("[<]");
  controlWheel(Direction::RIGHT, Direction::FORWARD,255);
  controlWheel(Direction::LEFT, Direction::BACKWARD,255);
}

void test() {
  stop();
  /*forward();
  delay(400);
  backward();
  delay(400);
  stop();*/

  delay(5000);
  //255,204,153,102,51,0
  Serial.println("Probando llanta derecha");
  controlWheel(Direction::RIGHT, Direction::FORWARD,255);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,204);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,153);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,102);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,51);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,0);
  delay(1000);
  controlWheel(Direction::RIGHT, Direction::FORWARD,255);

Serial.println("Probando llanta izquierda");
  controlWheel(Direction::LEFT, Direction::FORWARD,255);
  delay(1000);
  controlWheel(Direction::LEFT, Direction::FORWARD,204);
  delay(1000);
  controlWheel(Direction::LEFT, Direction::FORWARD,153);
  delay(1000);
  controlWheel(Direction::LEFT, Direction::FORWARD,102);
  delay(1000);
  controlWheel(Direction::LEFT, Direction::FORWARD,51);
  delay(1000);
  controlWheel(Direction::LEFT, Direction::FORWARD,0);
  delay(1000);
  stop();
  digitalWrite(pinVelocidadMotorLeft, 0);
  digitalWrite(pinVelocidadMotorRight, 0);
  
  Serial.println("Fin prueba");
delay(5000);

/*
  controlWheel(Direction::RIGHT, Direction::BACKWARD,255);
  delay(500);
  stop();
  controlWheel(Direction::LEFT, Direction::FORWARD,255);
  delay(500);
  controlWheel(Direction::LEFT, Direction::BACKWARD,255);
  delay(500);
  stop();
  forward();
  delay(200);
  backward();
  delay(200);
  forward();
  delay(200);
  backward();
  delay(200);
  stop();
  delay(3000);
  */
}

void makeSquare() {
  forward();
  delay(2000);
  right();
  delay(500);
  left();
  delay(50);
}