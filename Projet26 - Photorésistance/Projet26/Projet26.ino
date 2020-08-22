int pinPR = A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(analogRead(pinPR));
    delay(200);
}
