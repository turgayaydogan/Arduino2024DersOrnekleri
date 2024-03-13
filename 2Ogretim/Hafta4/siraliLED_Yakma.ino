#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
}
