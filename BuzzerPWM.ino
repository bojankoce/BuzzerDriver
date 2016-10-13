/*
 Drive the buzzer from the Arduino.
 Two Arduino pins (3 and 4) are connected
 to the buzzer and driving it in a complementary 
 manner (when pin 1 is HIGH, pin 2 is LOW and vice-versa).

 Buzzer features:
 Rated voltage:           5Vp-p square wave
 Operating voltage:       20Vp-p max.
 Operating frequency:     4000Hz +/- 500Hz
 Typical sound output:    75dB (@5V, 10cm, 4kHz)
 Rated current:           1mA (@5V, 4kHz, 25C)
 Operating temperature:   -40C...+105C

 created October 13 2016
 by Bojan Jovanovic
 
 */
 
int PWMpin1 = 3;   // Pin 1 of the Buzzer
int PWMpin2 = 4;   // Pin 2 of the Buzzer

void setup()

{

  pinMode(PWMpin1, OUTPUT);   // sets the pin as output
  pinMode(PWMpin2, OUTPUT);   // sets the pin as output

}



void loop()

{
  //analogWrite(PWMpin, 127);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  //digitalWrite(PWMpin, HIGH);
  digitalWrite(PWMpin1, HIGH);
  digitalWrite(PWMpin2, LOW);
  delayMicroseconds(125);
  digitalWrite(PWMpin1, LOW);
  digitalWrite(PWMpin2, HIGH);
  delayMicroseconds(125);
  
}
