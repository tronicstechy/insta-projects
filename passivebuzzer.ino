void setup() {
  pinMode(12, OUTPUT);  //I've used pin 12. The pin is your choice.
}

void loop() {
  tone(12, 100);
  delay(1000);

  tone(12, 200); 
  delay(1000);

  tone(12, 300); 
  delay(1000);

  tone(12, 350); 
  delay(1000);

  tone(12, 360); 
  delay(1000);
}

