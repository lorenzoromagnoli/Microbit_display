#ifndef Microbit_display_h
#define Microbit_display_h

#include <Arduino.h>

const int ledRows[] = {26, 27, 28};
const int ledColumns[] = {3, 4, 10, 23, 24, 25, 9, 7, 6};

const int N_ROWS=3;
const int N_COLS=9;

const int ledMapping[][25] =
{
  {ledRows[0], ledColumns[0]},
  {ledRows[1], ledColumns[3]},
  {ledRows[0], ledColumns[1]},
  {ledRows[1], ledColumns[4]},
  {ledRows[0], ledColumns[2]},

  {ledRows[2], ledColumns[3]},
  {ledRows[2], ledColumns[4]},
  {ledRows[2], ledColumns[5]},
  {ledRows[2], ledColumns[6]},
  {ledRows[2], ledColumns[7]},

  {ledRows[1], ledColumns[1]},
  {ledRows[0], ledColumns[8]},
  {ledRows[1], ledColumns[2]},
  {ledRows[2], ledColumns[8]},
  {ledRows[1], ledColumns[0]},

  {ledRows[0], ledColumns[7]},
  {ledRows[0], ledColumns[6]},
  {ledRows[0], ledColumns[5]},
  {ledRows[0], ledColumns[4]},
  {ledRows[0], ledColumns[3]},

  {ledRows[2], ledColumns[2]},
  {ledRows[1], ledColumns[6]},
  {ledRows[2], ledColumns[0]},
  {ledRows[1], ledColumns[5]},
  {ledRows[2], ledColumns[1]}

};

class Microbit_display{
private:

public:
  Microbit_display();
  void begin();
  void turnOnPixel (int i, int j);
  void drawIcon (boolean image[]);
};

#endif
