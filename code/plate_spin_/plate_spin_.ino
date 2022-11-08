const int stepPin = 2; // cnc shield x.step is > 2
const int dirPin = 5; // cnc shield x.dir > 5
int angle = 0; 

void setup() {
  pinMode (stepPin,OUTPUT);
  pinMode (dirPin,OUTPUT);
  Serial.begin(9600); //initialize the serial port
  pinMode(13, INPUT);
  //stepPin.setMaxSpeed(40000); //set the speed
}

void loop() {
  // Set the spinning direction clockwise:
  digitalWrite(dirPin, HIGH);
  digitalWrite(stepPin, HIGH);
    // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 800; x++) {
        delayMicroseconds(700);
        digitalWrite(stepPin,LOW); 
        delayMicroseconds(700); 
  } 
delay(1000); 

}
