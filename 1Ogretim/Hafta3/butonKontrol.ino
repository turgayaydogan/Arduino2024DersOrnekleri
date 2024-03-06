int ledDurum = 0;//led yanmıyor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1,INPUT);//BUTON
  pinMode(8,OUTPUT);//LED

}

void loop() {
  // put your main code here, to run repeatedly:
  int degerOku= digitalRead(1);//Digital 1 nolu pini oku
  delay(400);
  Serial.println(degerOku);
  if(degerOku==1)//butona basıldı
  {
    if(ledDurum==0)//led yanmıyor, yak
    {
      digitalWrite(8,1);
      ledDurum = 1;
    }
    else if(ledDurum==1)//led yanıyor, sondur
    {
      digitalWrite(8,0);
      ledDurum = 0;
    }
  }
  
}
