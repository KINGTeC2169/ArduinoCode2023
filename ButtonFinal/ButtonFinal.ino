/*
Arduino Leonardo Joystick!
*/

#include <USBAPI.h>
#include <Joystick.h>

Joystick_ joySt;

// TO DO: the values below don't quite zero out
const int button00Pin = 2;
const int button01Pin = 3;
const int button02Pin = 4;
const int button03Pin = 5;
const int button04Pin = 6;
const int button05Pin = 7;
const int button06Pin = 8;
const int button07Pin = 9;
const int button08Pin = 10;
const int button09Pin = 11;
const int button10Pin = 12;
const int button11Pin = 13;

int button00State = 0;
int button01State = 0;
int button02State = 0;
int button03State = 0;
int button04State = 0;
int button05State = 0;
int button06State = 0;
int button07State = 0;
int button08State = 0;
int button09State = 0;
int button10State = 0;
int button11State = 0;

void setup()
{
	pinMode(button00Pin, INPUT);
	pinMode(button01Pin, INPUT);
	pinMode(button02Pin, INPUT);
	pinMode(button03Pin, INPUT);
	pinMode(button04Pin, INPUT);
	pinMode(button05Pin, INPUT);
	pinMode(button06Pin, INPUT);
	pinMode(button07Pin, INPUT);
	pinMode(button08Pin, INPUT);
	pinMode(button09Pin, INPUT);
	pinMode(button10Pin, INPUT);
	pinMode(button11Pin, INPUT);

  Serial.begin(9600);

  joySt.begin();
	//joySt.buttons = 0;
}

const int pinToButtonMap = 9;

// Last state of the button
int lastButtonState[9] = {0,0,0,0,0,0,0,0,0};

void loop() {

  // Read pin values
  for (int index = 0; index < 9; index++)
  {
    int currentButtonState = !digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      joySt.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }
  delay(100);
}