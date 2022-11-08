
#include "AFMotor.h"
#include <Servo.h> 
Servo myservo;

void setup() {

  int servoPin = 5;
  Stepper1.setSpeed(200);
  Stepper2.setSpeed(200);
  my_servo.attach(10); 
  penUp() ; 
  Serial.begin(9600);

}

void loop () {
AF_Stepper Stepper1(200,1);//Μ1 Μ2  
AF_Stepper Stepper2(200,2);//Μ3 Μ4 

Servo my_servo; 

float x,y, panw, a,b,z;
String command , readString , c ;
float i ,j;

const int penZUp = 115; // servo position (I just put one for paper, but it may be diff for pumpkin)  
const float penZDown = 83; // //rotate counterclockwise at slow speed

}
