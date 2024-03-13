#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(8,INPUT_PULLUP);
  // put your setup code here, to run once:
  randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:
  int butonDegeri = digitalRead(8);
  if(butonDegeri==0)//butona basıldı
  {
    for(int i=2;i<=6;i++)
      digitalWrite(i,LOW);
    
    int rnd = random(2,7);//2..6
    digitalWrite(rnd,HIGH);
    Serial.println(rnd); 
    delay(1000); 
  }
  

  

}
