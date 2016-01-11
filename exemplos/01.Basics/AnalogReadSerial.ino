/*
  AnalogReadSerial
  Lê a entrada analógica no pino A3, imprime o resultado no monitor serial.
  Conecte o pino central de um potênciometro ao pino A3, e os pinos de fora a 3V (VCC) e terra (GND).
  
  Hardware Necessário:
  * MSP-EXP430G2 LaunchPad
  * Potênciometro de 10K
  * fios (jumpers)

  Este código de exemplo está em domínio público.
  
  modificado 11 Janeiro 2016
  por Ricardo Alcântara
*/

// a rotina setup roda assim que você pressiona o botão de reset ou liga a placa:
void setup() {
  // inicializa a comunicação serial em 9600 bits por segundo:
  Serial.begin(9600); // msp430g2231 deve usar 4800
}


// a rotina loop executa as instruções em sequência e repete para sempre:
void loop() {
  // lê o valor no pino analógico A3:
  int valorSensor = analogRead(A3);
  // imprime o valor que foi lido:
  Serial.println(valorSensor);
  delay(1); // aguarda entre leituras para garantir estabilidade
}
