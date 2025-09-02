// include the library for LCD
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set the number of rows and columns in the LCD
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to column 0, line 0
  lcd.setCursor(0, 0);
  // print a message to the LCD
  lcd.print("Guten Tag!");
 
  // set the cursor to column 0, line 0
  lcd.setCursor(0, 1);
  // print a message to the LCD
  lcd.print("Du bist schon");

}
