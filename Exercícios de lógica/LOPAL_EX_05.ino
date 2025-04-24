// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
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
  Serial.println("|     LOPAL - EX_05            |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
  //entrada
  Serial.println("Digite uma medida em centimetros: ");//pergunta uma medida em centímetros da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroCm = Serial.parseFloat();//resposta do usuário
     
  //processamento
  numeroPolegada = numeroCm / 2.54;
  
  //saida
 Serial.println("o valor em polegadas eh " + String(numeroPolegada,5) ); 
 delay(1500);
  
}