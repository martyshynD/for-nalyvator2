#include <Arduino.h> 
#include <Servo.h>

int int1 = 8;
int int2 = 9;
int int3 = 12;
int int4 = 13;
int button1 = 7;
int button2 = 2; 
int button3 = 3;
Servo servo; 
boolean a; 
boolean b; 
boolean c; 

void setup(){
  Serial.begin(9600);
  pinMode(int1, OUTPUT);
  pinMode(int2, OUTPUT);
  pinMode(int3, OUTPUT);
  pinMode(int4, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  servo.attach(10);
  servo.write(0);
}

void loop(){
  a = digitalRead(button1);
  b = !digitalRead(button2);

  if (a == 1){
    digitalWrite(int3, HIGH);
    digitalWrite(int4, LOW);
  }


  if (b == 1){
    digitalWrite(int3, HIGH);
    digitalWrite(int4, LOW);
  }
  else {
    digitalWrite(int3, LOW);
    digitalWrite(int4, LOW);
  }
}


