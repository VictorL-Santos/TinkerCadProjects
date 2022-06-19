#include <Servo.h>

Servo Meuservo;
int bttn = 11;
int ledr = 8;
int ledg = 7;

void setup()
{
  Meuservo.attach(4);
  pinMode(bttn, OUTPUT);
}

void loop()
{
  if(digitalRead(bttn) == HIGH) {
  	Meuservo.write(90);
    delay(500);
    digitalWrite(ledg, HIGH);
    digitalWrite(ledr, LOW);
  }else{
  	Meuservo.write(0);
    digitalWrite(ledr, HIGH);
    digitalWrite(ledg, LOW);
  }
}
