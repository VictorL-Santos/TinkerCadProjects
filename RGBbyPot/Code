int red = 5;
int blue = 6;
int green = 9;
const int pinPot0 = A0;
const int pinPot1 = A1;
const int pinPot2 = A2;
int valorPot0 = 0;
int valorPot1 = 0;
int valorPot2 = 0;
int IntsR = 0;
int IntsB = 0;
int IntsG = 0;

void setup()
{
  pinMode(pinPot0, INPUT);
  pinMode(pinPot1, INPUT);
  pinMode(pinPot2, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  valorPot0 = analogRead(pinPot0);
  IntsR = map(valorPot0, 0, 1023, 0, 255);
  analogWrite(red, IntsR);
  valorPot1 = analogRead(pinPot1);
  IntsB = map(valorPot1, 0, 1023, 0, 255);
  analogWrite(blue, IntsB);
  valorPot2 = analogRead(pinPot2);
  IntsG = map(valorPot2, 0, 1023, 0, 255);
  analogWrite(green, IntsG);
  delay(15);
}
