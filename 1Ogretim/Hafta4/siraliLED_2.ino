#define LED1 6
#define LED2 7
#define LED3 8
#define LED4 9
#define LED5 10

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=6;i<=10;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
}
