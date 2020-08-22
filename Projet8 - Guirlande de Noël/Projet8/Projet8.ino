int sortie[5] = {2, 4, 6, 8, 10};


void setup()
{ 
  for ( int i = 0; i < sizeof(sortie); i++)
    {
        pinMode(sortie[i], OUTPUT);
    } 
}

void loop()
{
    for (int i = 0; i < sizeof(sortie); i++)
    {
        digitalWrite(sortie[i], LOW);
    }
    
    for (int i = 0; i < sizeof(sortie); i++)
    {
        digitalWrite(sortie[i], HIGH);
        delay(1000);
    }
    
    for (int i = 0; i < sizeof(sortie); i++)
    {
        digitalWrite(sortie[i], LOW);
    }
    
    for (int i = sizeof(sortie) - 1; i >= 0; i--)
    {
        digitalWrite(sortie[i], HIGH);
        delay(1000);
    }
    
    for (int i = 0; i < sizeof(sortie); i++)
    {
        digitalWrite(sortie[i], LOW);
    }
    
    for (int i = 0; i < sizeof(sortie); i++)
    {
        digitalWrite(sortie[i], HIGH);
        delay(1000);
        digitalWrite (sortie[i], LOW);
    }
    
    for (int i = sizeof(sortie) - 1; i >= 0; i--)
    {
        digitalWrite(sortie[i], HIGH);
        delay(1000);
        digitalWrite (sortie[i], LOW);
    }
    delay(1000);
}    
