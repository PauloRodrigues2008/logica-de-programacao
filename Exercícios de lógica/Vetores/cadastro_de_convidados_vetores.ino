  // C++ code
  //Variaveis globais
  /*
  //criar vetor tamanho 4
   fazendo parte do mesmo cadastro
  */
  String  convidados[4];
  int idadeConvidados[4]; //camel case
  String emailConvidados[4];

   void desenhaCabecalho()
  { 
    Serial.println("** Churrascao do zeh **");
    Serial.println(); 
    Serial.println();
    Serial.println();

  }

  void setup() 
  {
    Serial.begin(9600);
  }


  void loop()
  {
   //fazer cabecalho bonitinho para o programa
     desenhaCabecalho();

    for(int i = 0; i < 4; i++)
    { 

      Serial.println("Informe " +String(i + 1)+ " o nome para cadastro");
      while(!Serial.available());
      convidados[i] = Serial.readString();

     Serial.println("Informe idade para cadastro");
      while(!Serial.available());
      idadeConvidados[i] = Serial.parseInt();

     Serial.println("Informe o gmail para cadastro");
      while(!Serial.available());
     emailConvidados[i] = Serial.readString();

      Serial.println();
    }


     Serial.println("**Exibir convidados eleitos a festa **");
     Serial.println();

    for(int i = 0; i < 4; i++)
    {
      Serial.println("Nome: " + convidados[i]);
      Serial.println("Idade: " + String(idadeConvidados[i]));
      Serial.println("Email: " + emailConvidados[i]);
      Serial.println("Permissao para a festa: " +  String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));


      Serial.println("----------");
      Serial.println();
  }

  }
