void setup() {
  Serial.begin(9600);
pinMode (2,OUTPUT);
pinMode (4,OUTPUT);
pinMode (3,OUTPUT);
pinMode (A0, INPUT);


pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (A1, INPUT);

}

void loop() {
  
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  analogWrite(3,analogRead(A0)*10);

 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
 analogWrite(9,analogRead(A1)*10);

 
 // Serial.println(analogRead(A0)*3);







 

}
