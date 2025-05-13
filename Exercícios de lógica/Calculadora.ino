
float   multiplicacao , divisao;
float resultado;


int escolhaDaOperacao;
int contador = 0;

float somar(float numero1Param, float numero2Param, float numero3Param = 0){ 
  int numero6; //variavel local
  // numero 3  parametro da funcao somar

  return (numero1Param + numero2Param + numero3Param);
}

//quando usamos void na função, ñ precisamos do retorno

float subtrair(float numero1Param, float numero2Param){

  return (numero1Param - numero2Param);   
}

float multiplicar(float numero1Param, float numero2Param){

  return (numero1Param * numero2Param);   
}

float dividir (float numero1Param, float numero2Param){

  return (numero1Param / numero2Param);   
}



void setup()
{
  Serial.begin(9600);

  float numero1 = 0;
  float numero2 = 0;

  do{

    float numero3global;

    Serial.println("Bem vindo (a) calculadora mega intenligente : p!!!");
    Serial.println("Escolha ums das opcoes/operacoes");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available()){}//ESperar o usuario digitar

    escolhaDaOperacao = Serial.parseInt(); //armazena o que o usuario digitou na variavel

    Serial.println("Agora, para realizar a operacao, digite o primeiro numero");
    while(!Serial.available()){} //ESperar o usuario digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora digite o segundo numero");
    while(!Serial.available()){} //ESperar o usuario digitar
    numero2 = Serial.parseFloat();

    //VERIFICANDO A ESCOLHA DA OPERACAO



    switch(escolhaDaOperacao){
      case 1:
      resultado = somar(numero1,numero2);

      Serial.println("WOW!!! MY GOD o resultado foi: " + String(resultado));
      break;

      case 2:
      resultado = subtrair(numero1, numero2);  
      Serial.println("WOW!!! MY GOD o resultado foi: " + String(resultado));

      break;

      case 3:
      resultado = multiplicar(numero1, numero2);  
      Serial.println("WOW!!! MY GOD o resultado foi: " + String(resultado));
      break;

      case 4:
      resultado = dividir(numero1, numero2);
      Serial.println("WOW!!! MY GOD o resultado foi: " + String(resultado));
      break;

      default:
      Serial.println("opcao invalida");

    }    

    Serial.println("voce gostaria de continuar? Se sim, digite[s], se nao digite[n]");
    while(!Serial.available()){} //ESperar o usuario digitar
    if(Serial.readString() == "s"){
      contador++;
    } 
    else{
      contador = 0;

      Serial.println("ate breve, obrigado por usar a calculadora inteligente");  
      Serial.println("Caso queira voltar, reinicie o sistema");
    }

  }
  while(contador != 0);

}

void loop()
{

  //sem código
}












