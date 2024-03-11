//constante para o pino da buzzer
#define pinoBuzzer 2
#define pinoBotao 8
#define pinoLedVermelho 3
#define pinoLedAmarelo 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoBotao, INPUT);
  delay(1000);
}



void loop() {
  if (digitalRead(pinoBotao) == 1) {
    tone(pinoBuzzer, 523);
    digitalWrite(pinoLedAmarelo, HIGH);
    delay(1000);
  } else {
    noTone(pinoBuzzer);
    digitalWrite(pinoLedAmarelo, LOW);
    delay(1000);
  }
}
