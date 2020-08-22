int pinMoteur = 7;

void setup()
{
    pinMode( pinMoteur, OUTPUT);
}

void loop()
{
    digitalWrite(pinMoteur, HIGH);
    delay(1000);
    digitalWrite(pinMoteur, LOW);
    delay(1000);
}
