int const trigPin = 7;
int const echoPin = 6;
int const buzzPin = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration;
int distance;
    digitalWrite(trigPin, HIGH); 
    delay(2);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
   distance = (duration*0.034)/2;
  if (distance <= 50 && distance >= 0) {
      digitalWrite(buzzPin, HIGH);
  } 
    else {
      digitalWrite(buzzPin, LOW);
    }
    
  delay(60);
}
