#include <LedBar.h>


LedBar::LedBar(int pin_1, int pin_2, int pin_3, int pin_4, int pin_5, int pin_6, int mode)
{
	_pin_1 = pin_1;
  _pin_2 = pin_2;
  _pin_3 = pin_3;
  _pin_4 = pin_4;
  _pin_5 = pin_5;
  _pin_6 = pin_6;
	pinMode(_pin_1, OUTPUT);
  pinMode(_pin_2, OUTPUT);
  pinMode(_pin_3, OUTPUT);
  pinMode(_pin_4, OUTPUT);
  pinMode(_pin_5, OUTPUT);
  pinMode(_pin_6, OUTPUT);
	_mode = mode;
}

LedBar::~LedBar()
{

}

void LedBar::tunrOn(int pin_seg)
{
switch (pin_seg)
{
case 1:
  digitalWrite(_pin_1, (_mode == MODE_CC) ? HIGH : LOW);
  break;

case 2:
  digitalWrite(_pin_2, (_mode == MODE_CC) ? HIGH : LOW);
  break;

case 3:
  digitalWrite(_pin_3, (_mode == MODE_CC) ? HIGH : LOW);
  break;

case 4:
  digitalWrite(_pin_4, (_mode == MODE_CC) ? HIGH : LOW);
  break;

case 5:
  digitalWrite(_pin_5, (_mode == MODE_CC) ? HIGH : LOW);
  break;

case 6:
  digitalWrite(_pin_6, (_mode == MODE_CC) ? HIGH : LOW);
  break;

default:
  break;
}
}

void LedBar::tunrOff(int pin_seg)
{
switch (pin_seg)
{
case 1:
  digitalWrite(_pin_1, (_mode == MODE_CC) ? LOW : HIGH);
  break;

case 2:
  digitalWrite(_pin_2, (_mode == MODE_CC) ? LOW : HIGH);
  break;

case 3:
  digitalWrite(_pin_3, (_mode == MODE_CC) ? LOW : HIGH);
  break;

case 4:
  digitalWrite(_pin_4, (_mode == MODE_CC) ? LOW : HIGH);
  break;

case 5:
  digitalWrite(_pin_5, (_mode == MODE_CC) ? LOW : HIGH);
  break;

case 6:
  digitalWrite(_pin_6, (_mode == MODE_CC) ? LOW : HIGH);
  break;

default:
  break;
}
}

LedBar ledbar(SEG_1_PIN, SEG_2_PIN, SEG_3_PIN, SEG_4_PIN, SEG_5_PIN, SEG_6_PIN, MODE_CC);