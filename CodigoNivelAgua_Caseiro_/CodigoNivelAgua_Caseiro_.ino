void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
/*
  Serial.print("Porta D3: ");
  Serial.println(digitalRead(3));
  Serial.print("Porta D4: ");
  Serial.println(digitalRead(4));
  Serial.print("Porta D5: ");
  Serial.println(digitalRead(5));
*/
  
   
  if (digitalRead(3) == 1 && digitalRead(4) == 0 && digitalRead(5) == 0) {
    Serial.println("Nível mínimo");
  } 
  if (digitalRead(4) == 1 && digitalRead(5) == 0) {
    Serial.println("Nível médio");
  }
   if (digitalRead(5) == 1 ) {
    Serial.println("Nível Maximo");
  }
  delay(100);

}
