#include<Servo.h>
Servo myServo;
int pos = 0;
const int trigPin = 9;
const int echoPin = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(11);

}
float ping()
{
  long duration;
  float distance;
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(5);
 duration = pulseIn(echoPin,HIGH);
 distance = (duration*0.0343)/2;
  Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    
    return distance;
  }

void loop() {
  // put your main code here, to run repeatedly:
  
  float measuredDistance = ping();
  if(measuredDistance<10)
  {
    myServo.write(180);
  }
  else
  {
    myServo.write(0);
  }

delay(1000);
}

  



