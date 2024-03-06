void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(LOW);  
  Serial.println(HIGH); 
  Serial.println(OUTPUT); 
  Serial.println(INPUT); 
  Serial.println(INPUT_PULLUP); 
  Serial.println(LED_BUILTIN); 

  
  /*
  HIGH | LOW
true | false
INPUT | OUTPUT | INPUT_PULLUP
LED_BUILTIN

  */
}
