int beklemeSuresi = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);
  pinMode(4,INPUT_PULLUP);

  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int butonDegeri1 = digitalRead(3);
  if(butonDegeri1 == 0)//1.butona basıldı
  {
    beklemeSuresi -= 100;
    if(beklemeSuresi<100)
      beklemeSuresi = 100;
    
    delay(200);
  }

  int butonDegeri2 = digitalRead(4);
  if(butonDegeri2 == 0)//2.butona basıldı
  {
    beklemeSuresi += 100;
    if(beklemeSuresi>=2000)
      beklemeSuresi = 2000;
    
    delay(200);
  }

  digitalWrite(6,HIGH);
  delay(beklemeSuresi);
  digitalWrite(6,LOW);
  delay(beklemeSuresi);
}
