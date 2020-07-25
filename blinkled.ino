//code for part 1 of my arduino tutorial: https://lacklusterstudios.blogspot.com/2020/07/arduino-introduction.html
//Blinking LED.  Blinks a LED on and off.
//licensed under GPL 3.0
//Author: chris nichols (github/rteturn5)

#define LEDPIN 5   //we will use pin 5 on the arduino for this project

void setup() { 
  pinMode(LEDPIN,OUTPUT);  //set pin 5 to be output
}

void loop() {
  digitalWrite(LEDPIN,HIGH);  //sets pin 5 to HIGH
  delay(1000);                //sleep for 1000 milliseconds 
  digitalWrite(LEDPIN,LOW);  //set pin 5 to LOW
  delay(1000);              //sleep for 1000 milliseconds
}
