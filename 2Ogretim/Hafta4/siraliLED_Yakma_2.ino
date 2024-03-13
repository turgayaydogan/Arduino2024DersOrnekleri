#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
}
