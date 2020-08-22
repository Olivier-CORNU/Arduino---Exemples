int nbalea;

void setup()
{
    Serial.begin(9600);
    randomSeed(analogRead(0));
}

void loop()
{
    nbalea = random(6);
    Serial.println(nbalea);
        
   delay(500);
}
