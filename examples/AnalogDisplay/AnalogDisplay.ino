#include <send2seg.h>
byte digitPins[] = {2,3,4,5}; // LSB to MSB
byte segmentPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; // seg a to g and dp
void setup()
{
  send2seg::set(1, 4, digitPins, segmentPins); // initialize 
}
void loop()
{ 
  int value=analogRead(A0);
  send2seg::loadValue(value,2); // load value  and point location
  delay(100);   
}
