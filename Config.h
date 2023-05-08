//General
enum Direction { FORWARD, BACKWARD, LEFT, RIGHT };

int delayT = 50;//300 Si el motor revisa varios ángulos, menos si es estático.
float distancias[5] = { 0, 0, 0, 0, 0 };
float lastDistance = 0;

//Ultrasonido
const int pinPulso = 2;
const int pinEco = 4;

//Servo
const int pinServo = 11;
int servoAngle = 0;

//L293D Motores y pines
const int pinVelocidadMotorRight = 3;
const int pinVelocidadMotorLeft = 5;
const int pin1MotorA = 10;  // Pin 14 of L293
const int pin2MotorA = 9;  // Pin 10 of L293
const int pin1MotorB = 6;  // Pin  7 of L293
const int pin2MotorB = 7;   // Pin  2 of L293
const int maxVelocidad = 255;