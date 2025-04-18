/*
 * Created by Julianne Leblanc-Peltier
 * Created on April 2025
 
 * Make a servo spin 90 degrees than return to original state.
 */

 # include <Servo.h>

 Servo servo;
 int angle = 10;
 int blinkTime = 1000;
   
  void setup() 
 {
    servo.attach(2);
    servo.write(angle);
  }
  
  void loop() 
 {
    // scan from 0  to 180 degrees
    for (angle = 10; angle < 180; angle++)
    {
      servo.write(angle);
      delay(15);
    }
    // now scan back from 180 to 0 degrees
    for(angle 180; angle > 10; angle--)
    servoNumber1.write(90);
    delay(blinkTime);
    servoNumber1.write(0);
    delay(blinkTime);
 
  }
