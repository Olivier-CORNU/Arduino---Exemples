int pin1 = 8;
int pin2 = 12;
int pinPWM = 11;
int rapport = 0;

void setup()
{
    pinMode (pin1, OUTPUT);
    pinMode (pin2, OUTPUT);
    pinMode (pinPWM, OUTPUT);
}

void loop()
{
    for (int i = 0; i <= 100; i +=25)
    {
        rapport = map (i, 0, 100, 0, 255);
        analogWrite (pinPWM, rapport);
        digitalWrite (pin1, HIGH);
        digitalWrite (pin2, LOW);
        delay (3000);
        digitalWrite (pin2, HIGH);
        delay(500);
        digitalWrite (pin1, LOW);
        delay(3000);
        digitalWrite (pin2, LOW);
        delay(500);
    }
    
}
