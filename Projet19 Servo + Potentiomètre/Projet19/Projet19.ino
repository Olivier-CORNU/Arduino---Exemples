#include <Servo.h>

int pinPot = 0;
int delai = 100;
int valeurPot, angle;
Servo monServo;


void setup()
{
    Serial.begin(9600);
    monServo.attach(8);
}

void loop()
{
    valeurPot = analogRead(pinPot);
    Serial.print(valeurPot);
    Serial.print("    ");
    angle = map(valeurPot, 0, 1023, 0, 179);
    Serial.println(angle);
    monServo.write(angle);
    delay(delai);
}
