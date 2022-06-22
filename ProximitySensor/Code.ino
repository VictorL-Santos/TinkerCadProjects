const byte triggerPin = 2;
const byte echoPin = 3;

long duracao;
int distancia;

int ledVerde = 8;
int ledAmarelo = 10;
int ledVermelho = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT); 
}

void loop()
{
  digitalWrite(triggerPin, LOW);
  delay(1);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  duracao = pulseIn(echoPin, HIGH);
  distancia = duracao*0.017;
  
  Serial.print("Distancia (cm): ");
  Serial.println(distancia);
  delay(100);
  
  if(distancia>=200){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  
  else if(distancia<200 && distancia>=100){
      digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
  
  else if(distancia<100){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
  
}
