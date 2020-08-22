int i;
int pinBouton = 2;
int pinLed = 4;
boolean etat1 = 0;
boolean etat2 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(pinBouton, INPUT_PULLUP);
    pinMode(pinLed, OUTPUT);
    digitalWrite(pinLed, 0);
}

void loop()
{
    boolean etatBouton = digitalRead(pinBouton);
    if (!etat1 && etatBouton)
    {
      etat1 = 1;
      if (!etat2)
          etat2 = 1;
          
      else
          etat2 = 0;
    }
    
    if (etat1 && !etatBouton)
        etat1 = 0;
        
    if (!etat2)
        digitalWrite(pinLed, 0);
    
    else
        digitalWrite(pinLed, 1);
        
    delay(200);
}
