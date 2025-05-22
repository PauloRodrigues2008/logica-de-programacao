//Exibir do 5 ao 1


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 1; contador <= 5; contador +=1 ){
    Serial.println("contador" + String(contador));
  }
 
  delay(12000);
  }