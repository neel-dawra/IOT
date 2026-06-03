void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  int data;
  data=analogRead(A0);
  Serial.println(data);
  delay(10);
  if(data>500)
  {
    digitalWrite(7,HIGH);
    digitalWrite(4,LOW);
  }
  else
  {
    digitalWrite(4,HIGH);
    digitalWrite(7,LOW);
  }

}
