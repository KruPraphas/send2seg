#ifndef SEND2SEG_H
#define SEND2SEG_H

#include "Arduino.h"
#include <avr/interrupt.h>

namespace send2seg 
{
	extern unsigned long msecs;
	extern volatile unsigned long count;
	extern volatile char overflowing;
	extern volatile unsigned int tcnt2;
	extern byte digits[4];
	extern byte noOfDigits;
	extern byte enableZB;
	extern byte *digitsPtr; 
	extern byte *digitPinsPtr;
	extern byte *segmentPinsPtr; 
	extern byte digitValueCurrent;
    extern byte digitValuePrevious;
    extern byte point; 
	void set(byte _enableZB, byte _noOfDigits, byte *digitPins, byte *segmentPins);
	void _overflow();
	void loadValue(int value,byte dp);
	void update();
}
#endif