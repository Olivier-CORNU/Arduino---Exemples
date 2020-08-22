#include <Servo.h>

int pinBouton = 2;
int pinServo = 8;
int cumul = 0;
int position = 0;
int angle = 0;
boolean valeurPinBouton;
Servo monServo;

void setup()
{
    Serial.begin(9600);
    pinMode(pinBouton, INPUT_PULLUP);
    monServo.attach(pinServo);
}

void loop()
{
    valeurPinBouton = digitalRead(pinBouton);
    
    if (valeurPinBouton)
    {
        cumul--;
        
        if (cumul < 0)
            cumul = 0;
    }
    
    else
    {
      cumul++;
      
      if (cumul > 20000)
          cumul = 20000;
    }
    
    position = map(cumul, 0, 20000, 0, 4);
    
    switch (position)
    {
        case 0 :
            angle = 0;
            break;
        case 1 :
            angle = 45;
            break;
        case 2 :
            angle = 90;
            break;
        case 3 :
            angle = 135;
            break;
        case 4 :
            angle = 180;
            break;
    }
    
    monServo.write(angle);
}
