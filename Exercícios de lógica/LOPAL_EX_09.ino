// C++ code
/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento..*/
//Variáveis
String nome = "";
String cargo = "";
float salarioAtual = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  //Entrada 
  Serial.println("Qual eh o nome do funcionario?");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Qual eh o cargo de " + nome);//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Qual eh o salario de " + nome);//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioAtual = Serial.parseFloat();//resposta do usuário
  
  if (salarioAtual <= 1000)
  {
    novoSalario = salarioAtual + (salarioAtual * 0.10);
  }  
  else 
  {
  novoSalario = salarioAtual;
  }
  //saída
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario atual: " + String (salarioAtual) );
  Serial.println("Novo salario: " + String (novoSalario, 2) );
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
    
  Serial.println();
  Serial.println();
  delay(5000);
  }