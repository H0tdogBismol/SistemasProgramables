/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:

int led = 12;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  //pinMode(pushButton, INPUT);
  pinMode(led,OUTPUT);
}


void loop() {

  int ldri = analogRead(A0);

  if(ldri>700){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  
  Serial.println(ldri);
  delay(50);        // delay in between reads for stability
  
}
