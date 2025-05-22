// C++ code
//
int ledInterno = 13;
int sensorUnidade = 7;

int ledVermelho = 12;

void setup()
{
  pinMode(ledInterno, OUTPUT);
  pinMode(sensorUnidade,INPUT);
      
  
  
}

void loop()
{
  digitalWrite(ledInterno, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledInterno, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledVermelho, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledVermelho, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}