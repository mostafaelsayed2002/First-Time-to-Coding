/*
Hello, world!
This is my first program using Energia with Tiva C
Contacts:
Mostafa Elsayed
https://www.facebook.com/mostafa.elsayed.2002
*/


int buttonPin1= PUSH1;  
int ledPin1=  GREEN_LED;   
int buttonState1 = 0;
int buttonState2 = 0;

int ledPin2=RED_LED;        
int buttonPin2 = PUSH2;
void setup() {
  pinMode(ledPin1, OUTPUT);      
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin2, INPUT_PULLUP);  
}

void loop(){

  buttonState1= digitalRead(buttonPin1);
  buttonState2= digitalRead(buttonPin2);

  if (buttonState1 == LOW && buttonState2==LOW) {     
    digitalWrite(ledPin1, HIGH);  
   digitalWrite(ledPin2, HIGH);  
  } 
  
  else if (buttonState2==LOW && buttonState1==HIGH){
    digitalWrite(ledPin2, HIGH); 
    digitalWrite(ledPin1, LOW); 
  }

  else if (buttonState2==HIGH && buttonState1==LOW){
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin1, HIGH); 
  }

else {
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin1, LOW); 
}
  
}

