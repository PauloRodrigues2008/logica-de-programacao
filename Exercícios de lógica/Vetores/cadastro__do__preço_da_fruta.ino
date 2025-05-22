// C++

String frutas[6];         
float precosFrutas[6];    

void setup()
{
  Serial.begin(9600);

  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  Serial.println();

  for (int i = 0; i <= 5; i++)
  {
    // Ler o nome da fruta
    Serial.println("Digite o nome da " + String(i + 1) + "a fruta: ");
    while (!Serial.available());
    frutas[i] = Serial.readString();
    

    // Ler o preço da fruta
    Serial.println("Digite o preco da " + frutas[i] + "? ");
    while (!Serial.available());
    precosFrutas[i] = Serial.parseFloat();
  }

  Serial.println();
  Serial.println("========= TABELA DO SACOLAO =========");
  Serial.println("Posicao | Nome da Fruta | Preco (R$)");
  Serial.println("--------------------------------------");

  for (int i = 0; i <= 5; i++)
  {
    Serial.println(String(i + 1) + "       | " + frutas[i] + " | R$ " + String(precosFrutas[i], 2));
  }
}

void loop()
{
}