int rojo = 16;
int amarillo = 4;
int verde = 2;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  
  lrojo();
  lamarillo();
  lverde();
  lamarillo();
  
}

void lrojo(){

  digitalWrite(rojo, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(rojo, LOW);
  
}

void lamarillo(){

  digitalWrite(amarillo, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(amarillo, LOW);
  delay(250);
    digitalWrite(amarillo, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(amarillo, LOW);
  delay(250);  digitalWrite(amarillo, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(amarillo, LOW);
  delay(250);
    digitalWrite(amarillo, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(amarillo, LOW);
  delay(250);
    digitalWrite(amarillo, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(amarillo, LOW);
  delay(250);
  
}

void lverde(){

  digitalWrite(verde, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, LOW);
  

}
