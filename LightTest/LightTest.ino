int buttonInput = 12;
int lightOutput = 13;
int buttonState = 0;

void setup() {
  // pu n  t your setup code here, to run once:
    pinMode(lightOutput, OUTPUT);
    pinMode(buttonInput, INPUT);
    digitalWrite(buttonInput, HIGH);
    Serial.begin(9600);
}

void loop() {
    buttonState = digitalRead(buttonInput);
    if (buttonState == HIGH) {
        digitalWrite(lightOutput, HIGH);
        Serial.println("On");
    } else {
        digitalWrite(lightOutput, LOW);
        Serial.println("Off");
        
    }
}
