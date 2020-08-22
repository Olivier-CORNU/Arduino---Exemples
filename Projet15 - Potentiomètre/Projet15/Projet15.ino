int pinPot = 2;
int valeurPot;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    valeurPot = analogRead(pinPot);
    Serial.print(valeurPot);
    Serial.print("\n");
    delay(500);
}

