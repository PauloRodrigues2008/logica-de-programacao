// Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//variavel
 float numeroCm = 0; 
 float numeroPolegada = 0;


void setup()
 
{
  Serial.begin(9600);
}

void loop()
{
 
   //Cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|     LOPAL - EX_06            |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  //entrada
  Serial.println("Digite uma polegada: ");//pergunta uma medida em polegada da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroPolegada = Serial.parseFloat();//resposta do usuário
  
  //Processamento
numeroCm = numeroPolegada / 2.54;
  
   //saída
 Serial.println("A conversao de centimetro para polegada eh: " + String (numeroCm) );
 delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}

