#include <CapacitiveSensor.h>

CapacitiveSensor cs_7_8 = CapacitiveSensor(7, 8);
unsigned long csSum;

void setup() {
  
  Serial.begin(9600);
}


void loop() {
  
  long fuel;
  fuel = cs_7_8.capacitiveSensor(200);

  //A subtração é feita para deixar o valor mais próximo de zero possível
  fuel = fuel - 20;
  
  //para 5 cm o valor fica em média 1500
  if (fuel >= 1500 && fuel <= 7100 ) {
    Serial.println("5 cm");
  } else {
  }
  //para 10 cm o valor fica em média entre 7100 e 16000  
  if (fuel >= 7101 && fuel <= 16200) {
    Serial.println("10 cm");
  } else {
  }
  //para 15 cm o valor fica em média 16200
  if (fuel >= 16201){// && fuel <= 1999) {
    Serial.println("15 cm");
  } else {
  }/*
  if (fuel >= 2000 && fuel <= 2999) {
    Serial.println("Cheio");
  } else {
  }
  if (fuel >= 3000 && fuel <= 3999) {
    Serial.println("Cheio");
  } else {
  }
  if (fuel >= 4000 ) {
    Serial.println("Cheio");
  } else {
  }*/

  delay (500);
}
