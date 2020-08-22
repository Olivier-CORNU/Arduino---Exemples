void setup()
{
  pinMode(13,OUTPUT);  //Signale à l’Arduino que la connexion 13 doit pouvoir envoyer du courant
}

void loop()
{
  digitalWrite(13,HIGH);  //Demande à l’Arduino d’envoyer du courant dans la connexion 13
  delay(5000);
  digitalWrite(13,LOW);
  delay(5000);
}
