/*
9 Button Extention for Driver Station
KINGTeC 2169

NOTE: This sketch will only work on HID supporting arduinos like the Arduino Leonardo
*/

#include <USBAPI.h>
#include <Joystick.h>

//Calls the Joystick library
Joystick_ joySt;

//defines the buttons' pins, which are used in a for loop later
const int button0 = 0;
const int button1 = 1;
const int button2 = 2;
const int button3 = 3;
const int button4 = 4;
const int button5 = 5;
const int button6 = 6;
const int button7 = 7;
const int button8 = 8;
const int button9 = 9;
const int button10 = 10;
const int button11 = 11;
const int button12 = 12;
const int button13 = 13;

void setup()
{
  //inits the pins and activates the built-in pull up resistors
	pinMode(button0, INPUT_PULLUP);
	pinMode(button1, INPUT_PULLUP);
	pinMode(button2, INPUT_PULLUP);
	pinMode(button3, INPUT_PULLUP);
	pinMode(button4, INPUT_PULLUP);
	pinMode(button5, INPUT_PULLUP);
	pinMode(button6, INPUT_PULLUP);
	pinMode(button7, INPUT_PULLUP);
	pinMode(button8, INPUT_PULLUP);
	pinMode(button9, INPUT_PULLUP);
  pinMode(button10, INPUT_PULLUP);
  pinMode(button11, INPUT_PULLUP);
  pinMode(button12, INPUT_PULLUP);
  pinMode(button13, INPUT_PULLUP);

  Serial.begin(9600);

  joySt.begin();
}

// Creates a list to help read the different button inputs
int buttonz[14] = {button0, button1, button2, 
                  button3, button4, button5, 
                  button6, button7, button8,
                  button9, button10, button11, 
                  button12, button13};

void loop() {

  // Read pin values
  for (int index = 0; index < 14; index++){
    int buttonState = digitalRead(buttonz[index]);
    //If a button is pressed, the driver station realizes
    if (buttonState == HIGH){
      joySt.setButton(index, 0);
    }      
    else{
      joySt.setButton(index, 1);
    }
  } 
  delay(50);
}