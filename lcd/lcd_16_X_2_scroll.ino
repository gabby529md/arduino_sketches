// include the library for LCD
#include <LiquidCrystal.h>

int positionCounter;

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set the number of rows and columns in the LCD
  lcd.begin(16, 2);
  // set the cursor to column 0, line 0
  lcd.setCursor(0, 0);
  // print a message to the LCD
  lcd.print("Guten Tag!");
  // wait for 1 second
  delay(1000);
}

void loop() {
  // scroll 13 positions to the left
  // to move the message offscreen towards the left
  for (positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayLeft();
    // wait for a bit
    delay(200);
  }
  
  // scroll 29 positions to the right
  // to move the message back onscreen and then offscreen to the right
  for (positionCounter = 0; positionCounter < 29; positionCounter++) {
    lcd.scrollDisplayRight();
    // wait for a bit
    delay(200);
  }

  // scroll 16 positions to the left
  // to move the message back onscreen
  for (positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayLeft();
    // wait for a bit
    delay(200);
  }

  // delay at the end of the full loop
  delay(1000);
}
