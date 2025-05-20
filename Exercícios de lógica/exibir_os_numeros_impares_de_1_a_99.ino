/*Exibir os numeros impares de 1 a 99*/
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for(int contador = 1; contador <= 99; contador +=2){
  Serial.println("contador" + String(contador));
  }
  delay(12000);
}