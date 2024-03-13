void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(4,INPUT_PULLUP);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int butonDegeri = digitalRead(4);
  if(butonDegeri == 0)//butona basıldı
  {
    for(int i=6;i<=10;i++)
      digitalWrite(i,LOW);
      
    int rnd = random(6, 11);//6-7-8-9-10
    digitalWrite(rnd,HIGH);
    delay(200);
  }
  


}
