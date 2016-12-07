int analogInPin = A1;
int buzzer = 4;
int sensorValue = 0;
#include <Servo.h>
Servo bipedal;

void setup() {
 bipedal.attach(5);
 pinMode (buzzer, OUTPUT);
}

void loop() {
 sensorValue = analogRead (analogInPin);
 sensorValue = (5.0 * sensorValue * 100.0)/1024.0;
  if (sensorValue >=125)
  {
    digitalWrite(buzzer, HIGH);
    bipedal.write(90);
  }
delay(250);  
}

