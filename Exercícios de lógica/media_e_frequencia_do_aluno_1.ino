/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!*/
//variaveis
float n1, n2, media;
float frequencia;

void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
 Serial.println("Digite sua primeira nota");
  while(Serial.available()); // tive que ver em outro em tinkercad como terminava o final pq eu não lembrava.
 n1 = Serial.parseFloat();

Serial.println("Digite sua segunda nota");
 while(Serial.available());
n2 = Serial.parseFloat();  

Serial.println("Digite sua frequencia");
 while(Serial.available());
frequencia = Serial.parseFloat();
}  


 