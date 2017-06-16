#include <Microbit_display.h>
Microbit_display screen = Microbit_display();

void setup() {
  screen.begin();
}

void loop() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      screen.turnOnPixel(i, j);
      delay(100);
    }
  }
}
