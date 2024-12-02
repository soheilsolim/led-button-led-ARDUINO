 int button =7;     
 int led =2;      
 int buttonState;      

void setup() {
  pinMode(led, OUTPUT);      
  pinMode(button, INPUT_PULLUP);     
}

void loop(){
   buttonState = digitalRead(button);
  if (buttonState == LOW) {         // LOW=0,HIGH=1
    digitalWrite(led, HIGH);  
  } 
  else {
    digitalWrite(led, LOW); 
  }
}
