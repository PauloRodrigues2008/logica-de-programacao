int resultado;
int tabuadaEscolhida;
void setup()
{
 Serial.begin (9600);
}

void loop()
{
 Serial.println("OLA jovem, tudo bem ? ");
 Serial.println(" Gostaria de Digitar uma tabuada, ?");
 Serial.println("SE gostaria nao perde tempo bb, por que quem perde tempo e relogio !!!");
 while (!Serial.available());
 tabuadaEscolhida = Serial.parseInt();
 
for(int contador =1; contador <=10; contador++){
resultado = tabuadaEscolhida * contador;
Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));
  
  
}  
  
}
