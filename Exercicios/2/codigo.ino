void setup()
{
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT); 
}

void loop()
{ 
  digitalWrite(8, HIGH);
  delay(10000); 
  digitalWrite(8, LOW);
  digitalWrite(4, HIGH);
  delay(10000); 
   digitalWrite(4, LOW);   
}
