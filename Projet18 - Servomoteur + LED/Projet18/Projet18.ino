#include <Servo.h>

Servo monServo;
int pinServo = 8;
int pinLed = 13;

void setup()
{
    monServo.attach(pinServo);
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    monServo.write(0);
    diode13();
    monServo.write(179);
    diode13();
}

void diode13()
{
    for (int t = 0; t < 30; t++)
    {
      digitalWrite(pinLed, HIGH);
      delay(100);
      digitalWrite(pinLed, LOW);
      delay(100);
    }
}
