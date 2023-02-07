int buttonPin = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int current = analogRead(buttonPin);

  Serial.println (current);

  if  (current < 100) 
  {

  }

  else if  (current < 200) 
  {
  
  }

}
