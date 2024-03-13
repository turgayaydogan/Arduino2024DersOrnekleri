void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,INPUT);
  pinMode(1,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger1 = digitalRead(10);
  Serial.print("IO 10:");
  Serial.println(okunanDeger1);
  delay(500);

  int okunanDeger2 = digitalRead(1);
  Serial.print("IO 1:");
  Serial.println(okunanDeger2);
  delay(500);
}