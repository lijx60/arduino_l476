
#define keypin  PC13
#define ledpin  PA5
boolean keysta ; 

void setup() {
  // put your setup code here, to run once:
    
    pinMode (keypin, INPUT);
    pinMode (ledpin, OUTPUT);
   }

void loop() {
  
  // put your main code here, to run repeatedly:
   keysta = digitalRead(keypin);
   if(keysta)
    {
      digitalWrite(ledpin,LOW);
     
      }
     else
    {
      digitalWrite(ledpin,LOW);
      delay(500);
      digitalWrite(ledpin,HIGH);
      delay(500);
      
      } 

}
