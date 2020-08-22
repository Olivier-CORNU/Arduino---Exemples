int pinTh = A0;
int valeur, t, tmp;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    valeur = analogRead(pinTh);
    t = map(valeur, 0, 1023, 0, 5000);
    tmp = map(t, 0, 1700, -50, 125);
    Serial.println(tmp);
    delay(200);
}
