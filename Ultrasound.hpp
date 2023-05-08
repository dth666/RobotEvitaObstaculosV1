void configUltraSound(){
  pinMode(pinPulso, OUTPUT);
  pinMode(pinEco, INPUT);
}

float getDistance() {
  digitalWrite(pinPulso, LOW);  //Por cuestión de estabilización del sensor
  delayMicroseconds(5);
  digitalWrite(pinPulso, HIGH);  //envío del pinPulso ultrasónico
  delayMicroseconds(10);
  return 0.01715 * pulseIn(pinEco, HIGH);
  //tiempo = pulseIn(pinEco, HIGH);  //funcion para medir el tiempo y guardarla en la variable "tiempo"
  //distancia = 0.01715 * tiempo; //fórmula para calcular la distancia
}
void see() {
  /*
  servo.write(0);
  delay(300);
  distancias[0] = getDistance();

  servo.write(45);
  delay(delayT);
  distancias[1] = getDistance();

  servo.write(90);
  */
  delay(delayT);
  distancias[2] = getDistance();
  /*
  servo.write(135);
  delay(delayT);
  distancias[3] = getDistance();

  servo.write(180);
  delay(delayT);
  distancias[4] = getDistance();

  servo.write(90);
*/
  Serial.print(distancias[0]);
  Serial.print(",");
  Serial.print(distancias[1]);
  Serial.print(",");
  Serial.print(distancias[2]);
  Serial.print(",");
  Serial.print(distancias[3]);
  Serial.print(",");
  Serial.println(distancias[4]);
}
