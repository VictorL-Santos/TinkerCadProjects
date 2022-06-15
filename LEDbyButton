int bttn = 5;
int led1 = 7;
int led2 = 8;
int led3 = 9;
int valor = 0;

void setup()
{
	  pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);
  	pinMode(led3, OUTPUT);
  	pinMode(bttn, INPUT);
}

void loop()
{
  while (valor<5){
  	if (digitalRead(bttn) == HIGH)
  	{
  	  valor++;
  	}
  	if (valor == 1)
  	{
      etapa1();
  	}
  	if (valor == 2)
  	{
      etapa1();
      etapa2();
  	}
    if (valor == 3)
    {
      etapa3();
    }
    if (valor == 4)
    {
      etapa2();
    }
    if (valor == 5)
    {
      valor = 0;
    }
  }
}

void etapa1()
{	
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(500);
}

void etapa2()
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);
}

void etapa3()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
}
