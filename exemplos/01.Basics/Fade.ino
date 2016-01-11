/*
  Fade
 
  Este exemplo mostra como dimerizar (fade) um LED no pino 14
  usando a função analogWrite().
 
  Hardware Necessário:
  * MSP-EXP430G2 LaunchPad
  
  Este código de exemplo está em domínio público.
  
  modificado 11 Janeiro 2016
  por Ricardo Alcântara
*/

int brilho = 0;    // quão brilhante o LED está
int quantidadeFade = 5;    // em quantos pontos dimerizar o LED

void setup()  { 
  // declara o pino 14 (LED verde) como saída:
  pinMode(GREEN_LED, OUTPUT);
} 

void loop()  { 
  // seta o brilho do pino 14 (LED verde):
  analogWrite(GREEN_LED, brilho);    

  // muda o brilho para a próxima passagem do loop:
  brilho = brilho + quantidadeFade;

  // reverte a direção da dimerização quando chega ao final: 
  if (brilho == 0 || brilho == 255) {
    quantidadeFade = -quantidadeFade ; 
  }     
  // aguarda 30 milisegundos para a percepção do efeito de dimerização
  delay(30);                            
}
