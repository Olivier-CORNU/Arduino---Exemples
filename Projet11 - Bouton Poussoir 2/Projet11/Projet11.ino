int i;
int pinBouton = 2;
const int longueur = 2;
int pinLed[longueur] = {4, 6};

void setup()
{
    Serial.begin(9600);
    pinMode(pinBouton, INPUT);
    for (i = 0; i < longueur; i++)
    {
        pinMode(pinLed[i], OUTPUT);
        digitalWrite(pinLed[i], 0);
    }
}

void loop()
{
    boolean etatBouton = digitalRead(pinBouton);
    Serial.println(etatBouton);
    if (etatBouton == 0)
    {
        digitalWrite(pinLed[0], 1);
        digitalWrite(pinLed[1], 0);
    }
    
    else
    {
        digitalWrite(pinLed[0], 0);
        digitalWrite(pinLed[1], 1);
    }
}
