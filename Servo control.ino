#include <Servo.h>

Servo myservo;  

void setup() {
  myservo.attach(D5);  
}


void loop() {    // scale it to use it with the servo (value between 0 and 180)
  for(int i=1;i<180;i++){
    Serial.println(i);
    myservo.write(i); 
  }
                   // sets the servo position according to the scaled value
  delay(105);       
    for(int i=180;i>0;i++){
    Serial.println(i);
    myservo.write(i); 
  }// waits for the servo to get there
}
