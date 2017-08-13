#include "LedControlMS.h"

LedControl lc = LedControl(12, 11, 10, 1);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 1);
  lc.clearDisplay(0);
}

void showFull() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, B11111111);
  }
}

void loop() { 
  showFull();
  delay(3000);
  lc.clearDisplay(0);
  delay(3000);
}
