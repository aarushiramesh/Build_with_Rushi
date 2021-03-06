//Count-Down Timer 
#include "SevSeg.h"
SevSeg sevenseg;

void setup() {
    byte digit = 1;
    byte pins[] = {};
    byte segmentPins[] = {4, 5, 8, 7, 6, 3, 2, 9};
    byte hard_conf = COMMON_CATHODE;
    bool resistorsonSegments = true;
    
    sevenseg.begin(hard_conf, digit, pins, segmentPins, resistorsonSegments);
    sevenseg.setBrightness(90);
}

void loop() {
    for(int i = 9; i >= 0; i--){
        sevenseg.setNumber(i, 0);
        delay(1000);
        sevenseg.refreshDisplay(); 
    }
}
