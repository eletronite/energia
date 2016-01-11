/*
  ReadAnalogVoltage
  Lê uma entrada analógica no pino A3, converte seu valor para tensõa, e imprime o resultado no monitor serial.
  Conecte o pino central de um potênciometro ao pino A3, e os pinos de fora a 3V (VCC) e terra (GND).
  
  Hardware Necessário:
  * MSP-EXP430G2 LaunchPad
  * Potênciometro de 10K
  * Fios (jumpers)
 
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
  // Converte a leitura analógica (que vai de 0 - 1023) para uma tensão (0 - 3V):
  // Pode utilizar variável int ou float para armazenar o valor da tensão, int utiliza menos memória e é recomendavel
  // Memória é uma grande preocupação na programação de microcontroladores, portanto seja cuidadoso com os tipos de
  // dados utilizados para tirar proveito de toda memória disponível
  int tensao = valorSensor * (3.0 / 1023.0);  
  // Você pode comparar o tamanho do código rodando o programa usando int e depois usando float.
  // Você verá ~4k bytes para int vs ~6k bytes para float, somente alterando o tipo de dado, bastante surpreendente! 
  //float tensao = valorSensor * (3.0 / 1023.0);  
  
  // imprime o valor convertido:
  Serial.println(tensao);
}
