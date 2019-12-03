

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  digitalWrite(7, LOW); 

}


void loop() 
{

  if (digitalRead (8)==HIGH)
  {
  digitalWrite(7, HIGH);
    while (digitalRead(9)==1)
    {
      delay (500); 
    }
  digitalWrite(7, LOW); 

  
  }
  
  
}
