/*
 * Created by Julianne Leblanc-Peltier
 * Created on April 2025
 
 * Make a servo spin 90 degrees than return to original state.
 */

 # include <Servo.h>

 Servo servoNumber1;
 int blinkTime = 1000;
   
  void setup() 
 {
    servoNumber1.attach(2);
    servoNumber1.write(0);
  }
  
  void loop() 
 {
    servoNumber1.write(90);
    delay(blinkTime);
    servoNumber1.write(0);
    delay(blinkTime);
 
  }
