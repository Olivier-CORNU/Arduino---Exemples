int pinPot = 0;
int valeurPot;
int valeurPinLed = 8;

void setup()
{
    Serial.begin(9600);
    pinMode (valeurPinLed, OUTPUT);
}

void loop()
{
    valeurPot = analogRead(pinPot);
    Serial.print(valeurPot);
    Serial.print("\n");
    
    if (valeurPot <= 1023 / 5)
    {
        digitalWrite (valeurPinLed, HIGH);
        delay(500);
        digitalWrite (valeurPinLed, LOW);
        delay(500);
    }
    
    else if (valeurPot <= 2 * 1023 /5)
    {
        digitalWrite (valeurPinLed, HIGH);
        delay(400);
        digitalWrite (valeurPinLed, LOW);
        delay(400);
    }
    
    else if (valeurPot <= 3 * 1023 /5)
    {
        digitalWrite (valeurPinLed, HIGH);
        delay(300);
        digitalWrite (valeurPinLed, LOW);
        delay(300);
    }
    
    else if (valeurPot <= 4 * 1023 /5)
    {
        digitalWrite (valeurPinLed, HIGH);
        delay(200);
        digitalWrite (valeurPinLed, LOW);
        delay(200);
    }
    
    else
    {
        digitalWrite (valeurPinLed, HIGH);
        delay(100);
        digitalWrite (valeurPinLed, LOW);
        delay(100);
    }
}

