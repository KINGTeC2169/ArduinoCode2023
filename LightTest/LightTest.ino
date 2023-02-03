int button1Input = 12;
int button2Input = 12;
int button3Input = 12;
int button4Input = 12;
int button5Input = 12;
int button6Input = 12;
int button7Input = 12;
int button8Input = 12;
int button9Input = 12;
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
    if  button1 == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("On");
    } else {
        digitalWrite(lightOutput, LOW);
        Serial.println("Off");
        
    }
}
