//C++
//variáveis
int palpites = 0;
int qtdPontos = 0;

/*
   Função para exibir um cabeçalho, pula uma linha e aguarda
   500 milisegundos a finalizar
*/
void desenhaCabecalho() 
{
  Serial.println();
  Serial.println("*******************************");
  Serial.println("--- PROGRAMA JOGOS DE DADOS ---");
  Serial.println("*******************************");
  Serial.println();
  delay(500);
}
/*
desenha quantos pontinhos o usuário quiser
se o usuário não passar nada, desenha 5 pontinhos
*/ 
void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {    
    Serial.print(".");
    delay(500);
  }

}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar pega o mesmo valor
}

void loop()
{
  desenhaCabecalho();// desenha o cabeçalho na tela
  
  //perguntar ao usuário quantas vezes ele quer jogar
  //criar os vetores baseados na quantidade de rodadas
  //jogar apenas essa quantidade (laço de repetição)
  
  
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas digitada pelo usuário
  
  int vetPalpites[qtdRodadas];//tamanho do vetor? R:Depende de quantas vezes ele quer jogar
  int vetResultados[qtdRodadas];//mesmo tamanho
  
  
  //processamento do jogo
  for(int r = 0; r < qtdRodadas; r++)
  {// aqui dentro, o jogo todo!!!
  	 //solicita o palpite do usuário
  Serial.println("Digite seu palpite (1 a 6): ");
  while (!Serial.available());// espera o usuário digitar
  int palpite = Serial.parseInt();// Aguarda o palpite do usuário

  //jogar o dado - sorteia um número randômico/aleatório de 1 até 7,ou seja,6
  int numeroSorteado = random(1, 7);//número entre 1 e 6
  
  //guardar os dados para estatísticas
   vetPalpites[r] = palpite;
   vetResultados[r] = numeroSorteado;
    
  Serial.print("Jogando o dado");
  
  desenhaPontinhos();

  Serial.println();

  //exibir o palpite do usuário
  Serial.println("Seu palpite foi: "+ String(palpite));

  //exibir o número sorteado]
  Serial.println("O numero sorteado foi: "+ String(numeroSorteado));


  if (palpite == numeroSorteado) 
  {
    Serial.println("Parabens! Voce acertou :) ");
  }
  else 
  {
    Serial.println("Que pena! Voce errou :( ");
  }


  }// fim do for 
  
  
  // ao finalizar, mostrar as características das jogadas - um relatório
  Serial.println("====ESTATISTICA DO JOGO=====");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++ )
  {
  Serial.println("Rodada"+ String(i + 1)+":");
  Serial.println("Palpite:"+String(vetPalpites[i]));
  Serial.println("Resultado:"+ String(vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou"));
  Serial.println("----------------------------");
  Serial.println();
  }
  
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  desenhaPontinhos(3, 500);
  delay(3000);//pausa de 3 segundos para reiniciar o loop
  
 

}//fim do loop
