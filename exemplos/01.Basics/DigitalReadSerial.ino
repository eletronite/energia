/*
  DigitalReadSerial com Pushbutton da placa
  Lê uma entrada digital no pino 5, imprime o resultado no monitor serial 
 
  Harware Necessário:
  * MSP-EXP430G2 LaunchPad
  
  Este código de exemplo está em domínio público.
  
  modificado 11 Janeiro 2016
  por Ricardo Alcântara
 */

// pino digital 5 possui um pushbutton conectado a ele. Atribua um nome a ele:
int pushButton = 5;

//  a rotina setup roda assim que você pressiona o botão de reset ou liga a placa:
void setup() {
  // inicializa a comunicação serial em 9600 bits por segundo:
  Serial.begin(9600); // msp430g2231 deve usar 4800
  // configura o pino do pushbuttond da placa como entrada com pullup:
  pinMode(pushButton, INPUT_PULLUP);
}

// a rotina loop executa as instruções em sequência e repete para sempre:
void loop() {
  // lê o pino de entrada:
  int estadoBotao = digitalRead(pushButton);
  // imprime o estado do botão:
  Serial.println(estadoBotao);
  delay(1);        // aguarda entre leituras para garantir estabilidade
}
