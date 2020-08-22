int affichageFait;

void setup()
{
 Serial.begin(9600);
 //Serial.println("Hello");
 //Serial.println("Arduino");
 //Serial.println("World !");
 //Serial.print("Hello ");
 //Serial.print("Arduino ");
 //Serial.print("World !");
affichageFait = 0; 
}

void loop()
{
  if (affichageFait == 0)
  {
    Serial.println("Hello");
    Serial.println("Arduino");
    Serial.println("World !");
    affichageFait =1;
  }
}
