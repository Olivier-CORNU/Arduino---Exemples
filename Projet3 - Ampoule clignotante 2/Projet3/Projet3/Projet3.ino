const int CONNEXION=13;

void setup()
{
  pinMode(CONNEXION,OUTPUT); 
}

void loop()
{
  digitalWrite(CONNEXION,HIGH);
  delay(500);
  digitalWrite(CONNEXION,LOW);
  delay(500);
}
