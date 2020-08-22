void setup()
{
 pinMode(2, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(6, OUTPUT); 
}

void loop()
{
  for (int i = 800; i >= 200; i-= 200)
  {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(6, HIGH);
    delay (1000);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(i);
  }
}
