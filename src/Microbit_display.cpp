#include "Microbit_display.h"

Microbit_display::Microbit_display()	{

}

void Microbit_display::begin(){
  for (int row=0;row<N_ROWS;row++){
    pinMode(ledRows[row],OUTPUT);
  }
  for (int col=0;col<N_COLS;col++){
    pinMode(ledColumns[col],OUTPUT);
  }
  Serial.begin (9600);
}
void Microbit_display::drawIcon (boolean image[]){
  for (int i=0; i<25; i++){
    if (image[i]){
      this->turnOnPixel((int)i/5,i%5);
      Serial.print((int)i/5);
      Serial.print("-");
      Serial.print(i%5);
      Serial.println();
    }
  }
}
void Microbit_display::turnOnPixel (int i, int j){
  for (int r = 0; r < N_ROWS; r++) {

    if (ledMapping[i * 5 + j][0] == ledRows[r]) {
      digitalWrite(ledRows[r], HIGH);
    } else {
      digitalWrite(ledRows[r], LOW);
    }
  }
  for (int c = 0; c < N_COLS; c++) {
    if (ledMapping[i * 5 + j][1] == ledColumns[c]) {
      digitalWrite(ledColumns[c], LOW);
    } else {
      digitalWrite(ledColumns[c], HIGH);
    }
  }




}
