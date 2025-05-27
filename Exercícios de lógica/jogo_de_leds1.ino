// C++ code
//
int ledVermelho = 10;
int ledVerde = 7;
int ledAzul = 2;
int ledAzul2 = 3;
int ledAzul3 = 4;
int palpite;
int acertos;


#include <Servo.h>
Servo motor; 
Servo meuServo;


void setup()
  
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT );
  pinMode(ledAzul2, OUTPUT );
  pinMode(ledAzul3, OUTPUT );
  Serial.begin(9600);
  motor.attach(2);
  motor.write(0);

  
  
 
  
}

void loop()
{
  Serial.println("Digite um numero para Adivinhe corretamente o numero sagrado do dado");
  Serial.println();
  Serial.println();
  while(! Serial.available ());
  palpite = Serial.parseInt();

  int numeroSorteado = random(1, 7);
  Serial.println("o seu palpite foi :" + String(palpite));
  Serial.println("o numero sorteado foi :" + String(numeroSorteado));

  if(palpite == numeroSorteado)
  { 
    
    Serial.println("Parabens, voce acertou !!");
    Serial.println();
       digitalWrite(ledVerde, HIGH);
    delay(1000); 
    digitalWrite(ledVerde, LOW);

  } else {
   

    Serial.println(" Que pena, tente outra vez !!");
    Serial.println();
   digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);

  }

  
   if(acertos == 0)
     
   {    
    digitalWrite(2, HIGH);

  }else if(acertos == 2)

  {
    digitalWrite(3, HIGH);

  } else if(acertos == 3)
     
   { 
     digitalWrite(4, HIGH);
     
     
    motor.write(0);
    delay(1500);
    motor.write(90);
    delay(1500);
    motor.write(180);
    delay(1500);
    motor.write(90);
    delay(1500);
    motor.write(0);
     
        Serial.println("Reiniciando programa");
    delay(1200);

     
   }
  
}
 