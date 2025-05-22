// C++ code
//
int palpite;

void desenhaCabecalho()
{ 
  Serial.println("************************************"); 
  Serial.println("--- Programa de Jogo de Dados ---  *");
  Serial.println("************************************");
  delay(500);
}
void desenhaPontinhos(int qtdPontos = 5,int tempo = 700)
{
 for(int i = 0; i <= qtdPontos; i++)
 {

    Serial.print(".");
    delay(tempo);
  }
}




void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop()

{

  desenhaCabecalho();  

  Serial.println("digite um palpite de 1 a 6");
  while(!Serial.available());
  palpite = Serial.parseInt();

  int numeroSorteado = random(1, 7);

 

  Serial.println("o seu palpite foi :" + String(palpite));

  desenhaPontinhos();
  
  Serial.println("o numero sorteado foi :" + String(numeroSorteado));
  

  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou !!");
  } else {  
    Serial.println(" Que pena, tente outra vez !!");
  }

  Serial.println("Reiniciando o programa");
  Serial.println();
  delay(700);
}
