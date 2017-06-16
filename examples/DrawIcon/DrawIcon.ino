#include <Microbit_display.h>
Microbit_display screen = Microbit_display();


boolean hearth[]={
  0,1,0,1,0,
  1,0,1,0,1,
  1,0,0,0,1,
  0,1,0,1,0,
  0,0,1,0,0,
};

void setup() {
  screen.begin();
}

void loop() {
  screen.drawIcon(hearth);
}
