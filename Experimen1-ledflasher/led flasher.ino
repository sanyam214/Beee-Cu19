void setup() {
  // put your setup code here, to run once:
   pinMode(12,OUTPUT);
   pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  delay(200);
  digitalWrite(12,LOW);
  delay(200);

  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(13,LOW);
  delay(400);
}
