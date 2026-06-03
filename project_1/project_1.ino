#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 400
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);

}

void loop() {
  int data=analogRead(A0);
  Serial.println(data);
  delay(50);                     
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); 
  int i=sonar.ping_cm();
  Serial.println("cm");
  if(data>500 && i<10)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }

}
