const int button1Input = 1;
const int button2Input = 2;
const int button3Input = 3;
const int button4Input = 4;
const int button5Input = 5;
const int button6Input = 6;
const int button7Input = 7;
const int button8Input = 8;
const int button9Input = 9;
int lightOutput = 13;
int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;
int button8 = 0;
int button9 = 0;

void setup() {
  // pu n  t your setup code here, to run once:
    pinMode(lightOutput, OUTPUT);
  //button 1 init
    pinMode(button1Input, INPUT);
    digitalWrite(button1Input, HIGH);
  //button 2 init
    pinMode(button2Input, INPUT);
    digitalWrite(button2Input, HIGH);
  //button 3 init
    pinMode(button3Input, INPUT);
    digitalWrite(button3Input, HIGH);
  //button 4 init
    pinMode(button4Input, INPUT);
    digitalWrite(button4Input, HIGH);
  //button 5 init
    pinMode(button5Input, INPUT);
    digitalWrite(button5Input, HIGH);
  //button 6 init
    pinMode(button6Input, INPUT);
    digitalWrite(button6Input, HIGH);
  //button 7 init
    pinMode(button1Input, INPUT);
    digitalWrite(button1Input, HIGH);
  //button 8 init
    pinMode(button8Input, INPUT);
    digitalWrite(button8Input, HIGH);
  //button 9 init
    pinMode(button9Input, INPUT);
    digitalWrite(button9Input, HIGH);  
    Serial.begin(9600);
}

void loop() {
   button1 = digitalRead(button1Input);
   button2 = digitalRead(button2Input);
   button3 = digitalRead(button3Input);
   button4 = digitalRead(button4Input);
   button5 = digitalRead(button5Input);
   button6 = digitalRead(button6Input);
   button7 = digitalRead(button7Input);
   button8 = digitalRead(button8Input);
   button9 = digitalRead(button9Input);
  
    if  (button1 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 1 On");
      } 
    else if  (button2 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 2 On");
      } 
    else if  (button3 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 3 On");
      }
    else if  (button4 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 4 On");
      }
    else if  (button5 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 5 On");
      }
    else if  (button6 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 6 On");
      } 
    else if  (button7 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 7 On");
      }
    else if  (button8 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 8 On");
      }
    else if  (button9 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("Button 9 On");
      }
    else {
        digitalWrite(lightOutput, LOW);
        Serial.println("Off ");
        
    }
}
