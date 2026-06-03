void setup()
{
    pinMode(7, OUTPUT); //green
    pinMode(8,OUTPUT); //yellow
    pinMode(4,OUTPUT); //red 
}


void loop()
{
      digitalWrite(4, LOW);  //green
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    delay(5000);

    digitalWrite(4, LOW);  //yellow
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    delay(2000);

     digitalWrite(4, HIGH); //red
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(5000);


}