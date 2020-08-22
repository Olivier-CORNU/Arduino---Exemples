int pinMoteur = 5;

void setup()
{
    digitalWrite(pinMoteur, OUTPUT);
}

void loop()
{
    for (int i = 0; i <= 100; i += 25)
    {
        int vitesse = map(i, 0, 100, 0, 255);
        analogWrite(pinMoteur, vitesse);
        delay(3000);
        analogWrite(pinMoteur, 0);
        delay(1000);
    }
}
