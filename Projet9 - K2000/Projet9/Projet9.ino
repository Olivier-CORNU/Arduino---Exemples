int pinLed[5];
int longueur = 5;

void setup()
{ 
  for (int i = 0; i < longueur; i++)    //Je range les pin dans le tableau pinLed
    {
        pinLed[i] = i + 2;
    }
    
    for (int i = 0; i < longueur; i++)    //J'active mes pins
    {
        pinMode(pinLed[i], OUTPUT);
    }
}

void loop()
{
    for (int i = 0; i < longueur; i++)    //Je m'assure que mes leds sont éteintes au démarrage
    {
        digitalWrite(pinLed[i], LOW);
    }
    
    for (int i = 0; i <= longueur - 2; i++)    //J'allume les leds dans l'ordre de 1 à 4
    {
        digitalWrite(pinLed[i], HIGH);
        delay(100);
        digitalWrite (pinLed[i], LOW);
    }
    
    for (int i = longueur - 1; i >= 1; i--)    //J'allume les leds dans l'ordre de 5 à 2
    {
        digitalWrite(pinLed[i], HIGH);
        delay(100);
        digitalWrite (pinLed[i], LOW);
    }
}
