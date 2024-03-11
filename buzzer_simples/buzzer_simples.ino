//constante para o pino da buzzer
#define pinoBuzzer 2

#define pinoLedVermelho 3 



void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  delay(1000);
}



void loop() {
digitalWrite(pinoBuzzer, HIGH);
digitalWrite(pinoLedVermelho, HIGH);
delay(1000);
noTone(pinoBuzzer);
digitalWrite(pinoLedVermelho, LOW);
delay(1000);
}
