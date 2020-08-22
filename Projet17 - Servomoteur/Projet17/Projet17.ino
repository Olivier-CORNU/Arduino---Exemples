int periode = 20000;
int pinServo = 8;

void setup()
{
    pinMode(pinServo, OUTPUT);
    digitalWrite(pinServo, LOW);
}

void loop()
{
    for (int angle=0; angle<=180; angle += 20)
        setAngle(angle);
}

void setAngle(int a)
{
    int duree = map(a, 0, 179, 200, 2000);
    digitalWrite(pinServo, LOW);
    
    for (int t=0; t<=300; t++)
    {
        digitalWrite(pinServo, HIGH);
        delayMicroseconds(duree);
        digitalWrite(pinServo, LOW);
        delayMicroseconds(periode - duree);
    }
}
