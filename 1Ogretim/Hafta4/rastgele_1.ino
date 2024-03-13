void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:
  //0 ve 299 arasında sınırlar dahil
  int rnd = random(300);
  Serial.println(rnd);  
  // 10 ve 19 arasında sınırlar dahil
  rnd = random(10, 20);
  Serial.println(rnd);

  Serial.println();
  delay(2000);

}
