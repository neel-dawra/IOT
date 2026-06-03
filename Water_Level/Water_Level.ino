void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  //pinMode(4,OUTPUT);

}

void loop() {
  int data;
  data=analogRead(A0);
  Serial.println(data);
  delay(10);
 if(data>800)
  {
    analogWrite(7,HIGH);
    tone(7,1000);
    //digitalWrite(4,LOW);
  }
  else
  {
    //digitalWrite(4,HIGH);
    analogWrite(7,LOW);
    noTone(7);
  }
delay(10);
}
