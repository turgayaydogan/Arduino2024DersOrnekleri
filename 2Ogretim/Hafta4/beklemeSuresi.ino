int beklemeSuresi = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buton1=digitalRead(8);
  if(buton1==0)//basıldı
  {
    beklemeSuresi += 100;
    if(beklemeSuresi>2000)
      beklemeSuresi=2000;
    
    delay(200);
  }

  int buton2=digitalRead(9);
  if(buton2==0)//basıldı
  {
    beklemeSuresi -=100;
    if(beklemeSuresi<200)
      beklemeSuresi = 200;
      
    delay(200);
  }

  digitalWrite(2,HIGH);
  delay(beklemeSuresi);
  digitalWrite(2,LOW);
  delay(beklemeSuresi);
}
