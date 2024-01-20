#include "Arduino.h"
#include "LedBar.h"

void setup()
{

}

void loop()
{
  for(int i = 1; i <= 6; i++)
  {
    ledbar.tunrOn(i);
    delay(100);
  }

  delay(200);

  for(int i = 6; i >= 1; i--)
  {
    ledbar.tunrOff(i);
    delay(100);
  }
  
  delay(200);
}