void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);//8 nolu pin çıkış olarak ayarlandı
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,1);// 1 = HIGH = +5V
  digitalWrite(9,0);// 0 = LOW = 0V
  delay(1000);
  digitalWrite(8,0);
  digitalWrite(9,1);
  delay(1000);
}
