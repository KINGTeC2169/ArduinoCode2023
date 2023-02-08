const int buttonInput1 = 1;
const int buttonInput2 = 2;
const int buttonInput3 = 3;
const int buttonInput4 = 4;
const int buttonInput5 = 5;
const int buttonInput6 = 6;
const int buttonInput7 = 7;
const int buttonInput8 = 8;
const int buttonInput9 = 9;

int buttonList[9] = {buttonInput1, buttonInput2, buttonInput3, 
                      buttonInput4, buttonInput5, buttonInput6, 
                      buttonInput7, buttonInput8, buttonInput9};

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
    int j;
    for (j=0; j < 9; j++) {
      pinMode(buttonList[j], INPUT);
      digitalWrite(buttonList[j], HIGH);
    }
    Serial.begin(9600);
}

void loop() {
  int w;
  for (w=0; w<9; w++) {
    "button"+String(w) = digitalRead(buttonList[w]); 
  }
  
    if  (button1 == HIGH) {
        Serial.println("Button 1 On");
      } 
    else if  (button2 == HIGH) {
        Serial.println("Button 25 On");
      } 
    else if  (button3 == HIGH) {
        Serial.println("Button 3 On");
      }
    else if  (button4 == HIGH) {
        Serial.println("Button 4 On");
      }
    else if  (button5 == HIGH) {
        Serial.println("Button 5 On");
      }
    else if  (button6 == HIGH) {
        Serial.println("Button 6 On");
      } 
    else if  (button7 == HIGH) {
        Serial.println("Button 7 On");
      }
    else if  (button8 == HIGH) {
        Serial.println("Button 8 On");
      }
    else if  (button9 == HIGH) {
        Serial.println("Button 9 On");
      }
    else {
        Serial.println("Off ");
        
    }
}
