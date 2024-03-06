void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("A");
  Serial.println(OUTPUT);
  Serial.println(INPUT);
  Serial.println(HIGH);
  Serial.println(LOW);
  Serial.println();
  delay(1000);
}
