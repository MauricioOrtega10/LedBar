#ifndef _LedBar_h
#define _LedBar_h

#include "LedBarConfig.h"
#include "Arduino.h"

#define MODE_CC 0
#define MODE_CA 1

class LedBar 
{
  public:
   LedBar(int pin_1, int pin_2, int pin_3, int pin_4, int pin_5, int pin_6, int mode);
   ~LedBar();
   void tunrOn(int pin_led);
   void tunrOff(int pin_led);
   
  private:  
   int _pin_1;
   int _pin_2;
   int _pin_3;
   int _pin_4;
   int _pin_5;
   int _pin_6;
   int _mode;

};

extern LedBar ledbar;

#endif