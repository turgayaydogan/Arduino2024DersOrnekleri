void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int okunanDeger = digitalRead(4);
  Serial.println(okunanDeger);
}
