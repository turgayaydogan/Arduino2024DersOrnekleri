void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = analogRead(0);//A0 = 0
  Serial.println(okunanDeger);
}
