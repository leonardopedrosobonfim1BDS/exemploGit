void setup() {
  Serial.begin(9600);
}

void loop() {
 float sal, perc, aumento, novo_sal;
 Serial.println("Digite o salario dos funcionarios: ");
 while(Serial.available());
 sal = Serial.parseFloat();

 Serial.println("Digite o percentual de aumento: ");
 while(Serial.available())
 perc = Serial.parseFloat();

 aumento = sal +perc / 100;

 novo_sal = sal + aumento;

 Serial.print("Valor do aumento e: ");
 Serial.println(aumento);
 Serial.print("Novo salario do funcionario e: ");
 Serial.println(novo_sal);

 delay(1000);

}
