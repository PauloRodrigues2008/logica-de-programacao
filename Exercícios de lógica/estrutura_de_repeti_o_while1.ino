//whilw - É uma estrutura de repetiçao
// que só executa repetição/ laço enquanto a condição for verdadeira 

int numero1 = 5; //variavel global

void setup()
{
Serial.begin(9600);
}
//função
void loop()
{
 //o 0 também conta
 //while 
int contadorWhile = 1; // variavel local

  while (contadorWhile <=1000){
Serial.println(String(contadorWhile));
//contadorWhile = contadorwhile + 1;
contadorWhile++;
}
delay(1000);
}