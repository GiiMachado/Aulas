
int var1;
int var2;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT); 
    pinMode(led, OUTPUT); 
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){
    digitalWrite(led, HIGH);
    Serial.println("botao 1 apertado");
   }
   if(!var2){
    digitalWrite(led, LOW);
    Serial.println("botao 2 apertado");
   }
 }
