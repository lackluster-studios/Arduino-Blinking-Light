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
