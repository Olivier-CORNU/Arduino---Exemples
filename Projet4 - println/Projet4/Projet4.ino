void setup()
{
  Serial.begin(9600);
 Serial.println("Communication initialisée"); 
}

void loop()
{
  delay(2000);
  Serial.println("Je suis dans la boucle !");
}
