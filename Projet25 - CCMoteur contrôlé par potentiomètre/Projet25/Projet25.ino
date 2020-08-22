int i;
int pin1 = 8;
int pin2 = 12;
int pinPWM = 11;
int vitesse = 0;
int niveauPot;
boolean etat1 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode (pin1, OUTPUT);
    pinMode (pin2, OUTPUT);
    pinMode (pinPWM, OUTPUT);
    i = 0;
}

void loop()
{
    niveauPot = analogRead(A0);
    vitesse = map( niveauPot, 0, 1023, 0, 255);
    analogWrite(pinPWM, vitesse);
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    delay(100);
}
