

#include <Servo.h>

Servo myservo; 

int potpin = 0;
int val;    

void setup() {
  myservo.attach(9); 
   Serial.begin(9600); 
}

void loop() {
 myservo.attach(9);
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);        
                   
  }
///////
