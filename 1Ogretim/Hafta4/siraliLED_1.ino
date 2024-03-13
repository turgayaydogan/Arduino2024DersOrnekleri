void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
}
