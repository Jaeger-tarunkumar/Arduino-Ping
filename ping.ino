
const int trigPin = 9;
const int echoPin = 10;
float duration, distance;
void setup() {
  Serial.begin(9600);

}

void loop() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(5);
 duration = pulseIn(echoPin,HIGH);
 distance = (duration*0.0343)/2;
 Serial.print("Distance : ");
 Serial.println(distance);
 Serial.print("Duration : ");
 Serial.println(duration);
delay(1000);
}
