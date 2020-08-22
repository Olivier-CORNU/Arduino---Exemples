int i;
int pin1 = 8;
int pin2 = 12;
int pinPWM = 11;
int vitesse = 0;
int pinBouton = 7;
boolean etatBouton = 0;
boolean etat1 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(pinBouton, INPUT_PULLUP);
    pinMode (pin1, OUTPUT);
    pinMode (pin2, OUTPUT);
    pinMode (pinPWM, OUTPUT);
    i = 0;
}

void loop()
{
    etatBouton = digitalRead(pinBouton);
    
    if (!etat1 && etatBouton)
    {
        i++;
        if (i == 5)
            i = 0;
            
        etat1 = 1;
        vitesse = map( i, 0, 4, 0, 255);
        analogWrite(pinPWM, vitesse);
        digitalWrite(pin1, HIGH);
        digitalWrite(pin2, LOW);
    }
    
    else if (etat1 && !etatBouton)
        etat1 = 0;
    
    delay(200);
}
