int ledDurum = 0;// ilk başta led yanmıyor 0, yanma durumu 1 olsun

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = digitalRead(2);
  delay(300);
  if(deger==1)//butona basıldı
  {
    if(ledDurum==0)
    {
      digitalWrite(8,1);
      ledDurum = 1;
    }
    else
    {
      digitalWrite(8,0);
      ledDurum = 0;
    }
    delay(300); 
  }
  

}
