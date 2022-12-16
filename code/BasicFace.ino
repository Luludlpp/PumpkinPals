#include <Stepper.h> 
#define STEPS 200

int limit=HIGH;
int estop = HIGH;

Stepper stepper1(STEPS, 2, 3); // Pin 2 connected to DIRECTION & Pin 3 connected to STEP Pin of Driver
Stepper stepper2(STEPS, 4, 5); // Pin 4 connected to DIRECTION & Pin 5 connected to STEP Pin of Driver


//Madeline Robertson
//Code to draw a basic face on the small white pumpkin
//12-7-2022

void setup() {
  stepper1.setSpeed(200);
  stepper2.setSpeed(100);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  digitalWrite(12,HIGH);
  digitalWrite(11, HIGH);

}

void loop() {

  //bottom of eye 1, -80 steps horizontal
  for(int i=1; i<=160; i++){
    stepper2.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }


  //left side of eye 1, 2000 steps vertical, 40 steps horizontal
  for(int i=1; i<=2000; i++){
    stepper1.step(1);
    if (i%50 == 0){
      stepper2.step(1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }


  //right side of eye 1, -2000 steps vertical, 40 steps horizontal
  for(int i=1; i<=2000; i++){
    stepper1.step(-1);
    if (i%50 == 0){
      stepper2.step(1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//connection between eye 1 and eye 2 and bottom of eye 2, 200 steps horizontal
  for(int i=1; i<=200; i++){
    stepper2.step(1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//right side of eye 2, 2000 steps vertical, -40 steps horizontal
  for(int i=1; i<=2000; i++){
    stepper1.step(1);
    if (i%50 == 0){
      stepper2.step(-1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//left side of eye 2
  for(int i=1; i<=2000; i++){
    stepper1.step(-1);
    if (i%50 == 0){
      stepper2.step(-1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//to middle of eye connection was 60
  for(int i=1; i<=60; i++){
    stepper2.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//down to nose, -500 steps vertical
  for(int i=1; i<=500; i++){
    stepper1.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }


//right side of nose, -2000 steps vertical, 50 steps horizontal
  for(int i=1; i<=2000; i++){
    stepper1.step(-1);
    if (i%40 == 0){
      stepper2.step(1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//bottom of nose, -100 steps horizontal
  for(int i=1; i<=120; i++){
    stepper2.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }


//left side of nose, 2000 steps vertical, 50 steps horizontal
  for(int i=1; i<=2000; i++){
    stepper1.step(1);
    if (i%40 == 0){
      stepper2.step(1);
    }
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//down through nose to mouth, -3000 steps vertical
  for(int i=1; i<=3000; i++){
    stepper1.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//right of mouth, 150 steps horizontal
  for(int i=1; i<=150; i++){
    stepper2.step(1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

//rest of mouth, -300 steps horizontal
  for(int i=1; i<=300; i++){
    stepper2.step(-1);
    limit = digitalRead(12);
    estop = digitalRead(11);
    if(limit==LOW){
      exit(0);
    } 
    estop = digitalRead(11);
    if (estop == LOW){
      exit(0);
    } 
  }

  
  exit(0);
}
