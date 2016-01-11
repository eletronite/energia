/*
  Blink
  O exemplo básico da Energia.
  Liga um LED por um segundo, depois desliga por um segundo, repetidamente.
  Troque a definição de LED para piscar outros LEDs.
  
  Hardware necessário:
  * LaunchPad com um LED
  
  Este código de exemplo está em domínio público.
  
  modificado 11 Janeiro 2016
  por Ricardo Alcântara
*/

// maioria dos LaunchPads possuem um LED vermelho
#define LED RED_LED

// veja pins_energia.h para mais definições de LED
//#define LED GREEN_LED
  
// a rotina setup roda assim que você pressiona o botão de reset ou liga a placa:
void setup() {                
  // inicializa o pino digital correspondente ao LED como saída.
  pinMode(LED, OUTPUT);     
}

// a rotina loop executa as instruções em sequência e repete para sempre:
void loop() {
  digitalWrite(LED, HIGH);   // liga o LED (HIGH/ALTO é o nível de tensão)
  delay(1000);               // aguarda um segundo
  digitalWrite(LED, LOW);    // desliga o LED colocando a tensão em LOW (nível BAIXO)
  delay(1000);               // aguarda um segundo
}
