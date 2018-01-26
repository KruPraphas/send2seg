# send2seg
display value to 7 segment 4 digit common cathode with decimal point

# Wiring:
It is very easy to connect an 7 segment 4 digit to the Arduino. For example, if you are using 
 ```c++
byte digitPins[] = {2,3,4,5}; // LSB to MSB
byte segmentPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; // seg a to g and dp
 ```
As in the picture:
![7 segment 4 digit with Arduino](extras/send2segArduino.jpg?raw=true "7 segment 4 digit with Arduino")
![7 segment 4 digit with Arduino](extras/send2segArduino2.jpg?raw=true "7 segment 4 digit with Arduino")
