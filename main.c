#include <Servo.h> 

Servo myServo;
int servoMos = 0;
int motionPin = 2;

void setup() {
  // put your setup code here, to run once:
    myServo.attach(9);
    pinMode(motionPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue = digitalRead(motionPin);
  if(readValue == 1){
    Opendoor();
    delay(5000);
  }else{
    Closedoor();

  }
}
void Opendoor(){
  while(servoMos < 110){
    servoMos++;
    myServo.write(servoMos);
    delay(20);
  }
}
  
  
void Closedoor(){
  while(servoMos >0){
    servoMos--;
    myServo.write(servoMos);
    delay(20);
  }
}
