
/*
 * PinControl.h
 *
 *  Created on: 16 maj 2014
 *      Author: MattLech
 */

#ifndef PINCONTROL_H_
#define PINCONTROL_H_

#include "Arduino.h"
#include "pins.h"
#include "Config.h"
#include <stdio.h>
#include <stdlib.h>

class PinControl {
public:
        static PinControl* getInstance();

	int setMode(int pinNr, int mode);
	int writeValue(int pinNr, int value);
	int readValue(int pinNr);
	int writePulse(int pinNr, int valueOne, int valueTwo, long time);

private:
        PinControl();
        PinControl(PinControl const&);
        void operator=(PinControl const&);
};

#endif /* PINCONTROL_H_ */