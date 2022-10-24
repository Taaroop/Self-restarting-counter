long a = 500;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(a);
  digitalWrite(8, LOW);
  delay(a);
  if (a > 50){
    a -= (0.2*a);
  }
  else{
    a = 500;
  }
  
}
