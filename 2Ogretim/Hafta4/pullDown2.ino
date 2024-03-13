void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = digitalRead(10);
  Serial.println(okunanDeger);
  delay(500);
}
