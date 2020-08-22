int nombre, i, numeroPin;

void setup()
{
 Serial.begin(9600);
 nombre = 1;
 numeroPin = 13;
}

void loop()
{
  if (nombre <=20)
  {
    Serial.println(nombre);
    for (i = 1; i <= nombre; i++)
    {
      digitalWrite(numeroPin,HIGH);
      delay(250);
      digitalWrite(numeroPin,LOW);
      delay(250);
    }
    nombre++;
  }
}
