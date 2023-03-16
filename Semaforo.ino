void setup() {
  pinMode(16,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {

  rojo();
  amarillo();
  verde();
  amarillo();
  
}

void rojo(){
  digitalWrite(16,HIGH);
  delay(3000);
  digitalWrite(16,LOW);
}

void amarillo(){
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
}

void verde(){
  digitalWrite(2,HIGH);
  delay(3000);
  digitalWrite(2,LOW);
}
