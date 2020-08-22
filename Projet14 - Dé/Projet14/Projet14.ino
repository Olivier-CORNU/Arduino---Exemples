int nbalea;
int pinLed[5] = {2,3,4,5,6};
int pinBouton = 7;
int i;
boolean etatBouton;
boolean etat1;

void setup()
{
    Serial.begin(9600);
    randomSeed(analogRead(0));
    
    for (i = 0; i<=4; i++)
    {
        pinMode(pinLed[i], OUTPUT);
        digitalWrite(pinLed[i], HIGH);
    }
    
    pinMode (pinBouton, INPUT_PULLUP);
}

void loop()
{
    etatBouton = digitalRead(pinBouton);
  
    if (etatBouton && !etat1)
    {
        etat1 = 1;
        nbalea = random(6);
        Serial.println(nbalea);
        
        switch (nbalea)
        {
            case 0 : nombrezero();
                break;
        
            case 1 : nombreun();
                break;
        
            case 2 : nombredeux();
                break;
        
            case 3 : nombretrois();
                break;
        
            case 4 : nombrequatre();
                break;
        
            case 5 : nombrecinq();
                break;
        }
    }
    
    if (!etatBouton && etat1)
        etat1 = 0;
}

void nombrezero()
{
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], LOW);
}
    
void nombreun()
{
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], HIGH);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], LOW);
}
    
void nombredeux()
{
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], HIGH);
}
    
void nombretrois()
{
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], HIGH);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], HIGH);
}
    
void nombrequatre()
{
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], HIGH);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], HIGH);
    digitalWrite(pinLed[4], HIGH);
}
        
void nombrecinq()
{
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], HIGH);
    digitalWrite(pinLed[2], HIGH);
    digitalWrite(pinLed[3], HIGH);
    digitalWrite(pinLed[4], HIGH);
}
