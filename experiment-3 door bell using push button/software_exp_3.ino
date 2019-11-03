const int switchPin= 2;
const int bellPin = 7;
int bellState= LOW;
int switchState= LOW;
unsigned long debounceTime=0 ;
unsigned long debounceDelay= 10;
void setup() {
  // put your setup code here, to run once:
 pinMode(switchPin, INPUT);
 pinMode(bellPin, INPUT);
 digitalWrite(bellPin, bellState);
}
 void loop() {
  // put your main code here, to run repeatedly:
 int reading= digitalRead(switchPin);
 if(reading!=switchState){
  debounceTime= millis();
 }
 if((millis()-debounceTime) > debounceDelay){
  if(reading!=switchState){
    switchState=reading;
    if(switchState==HIGH){
      bellState=!bellState;
    }
  }
 }
 digitalWrite(bellPin, bellState);
 switchState= reading;
 }
