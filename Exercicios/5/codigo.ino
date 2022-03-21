int button = 5;
int led = 9;
int lastButtonState = 0;
int estadoButton = 0;


void setup()
{
  pinMode(led , OUTPUT);
  pinMode (button , INPUT);
  
}

void loop()
{
  estadoButton = digitalRead (button);
  if ( estadoButton == HIGH ) { 
    digitalWrite(led , LOW);
    delay(1000);
  }
  else { 
    digitalWrite (led , HIGH );  
  }
}

