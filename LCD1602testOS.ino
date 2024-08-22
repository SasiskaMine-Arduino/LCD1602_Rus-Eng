// Прошивка для проверки LCD1602 и других 16,2 LCD  
// Библеотека LCD1602RUS_ALL https://github.com/ssilver2007/LCD_1602_RUS  
// By SasiskaMine Arduino 
// порты: GND = GND , VCC = 5V , SDA (SS) = A4 (analog) , SCL = A5 (analog) 
// Меняем 0x27 на свой
// чтоб нарисовать квадрат: lcd.createChar(0, BOX);
#define _LCD_TYPE 1 
#include <LCD_1602_RUS_ALL.h>

LCD_1602_RUS lcd(0x27, 16, 2);

byte BOX[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
}; 
  
int time1 = 500;

void setup() {
  lcd.init(); 
  lcd.backlight(); 
  lcd.setCursor(0, 0);
  lcd.print("ARDUINO");
  delay(1000);
  lcd.setCursor(8, 1);
  lcd.print("ARDUINO");
  delay(2000);
  lcd.clear();
  lcd.setCursor(9, 0);
  lcd.print("ARDUINO");
  lcd.setCursor(0, 1);
  lcd.print("ARDUINO");
  delay(5000);
  lcd.clear();
}

void loop() {
  lcd.clear();
  lcd.print("A"); delay(time1);
  lcd.print("R");delay(time1);
  lcd.print("D");delay(time1);
  lcd.print("U");delay(time1);
  lcd.print("I");delay(time1);
  lcd.print("N");delay(time1);
  lcd.print("O");delay(time1);
  lcd.print(" ");delay(time1);
  lcd.print("A");delay(time1);
  lcd.print("R");delay(time1);
  lcd.print("D");delay(time1);
  lcd.print("U");delay(time1);
  lcd.print("I");delay(time1);
  lcd.print("N");delay(time1);
  lcd.print("O");delay(time1);
  lcd.print("!");delay(time1);
  lcd.setCursor(0, 1);
  lcd.print("B"); delay(time1);
  lcd.print("y");delay(time1);
  lcd.print(":");delay(time1);
  lcd.print("S");delay(time1);
  lcd.print("a");delay(time1);
  lcd.print("s");delay(time1);
  lcd.print("i");delay(time1);
  lcd.print("s");delay(time1);
  lcd.print("k");delay(time1);
  lcd.print("a");delay(time1);
  lcd.print(" ");delay(time1);
  lcd.print("M");delay(time1);
  lcd.print("i");delay(time1);
  lcd.print("n");delay(time1);
  lcd.print("e");delay(time1);
  lcd.print("!");delay(time1);
  delay(2000);
  lcd.clear();
    lcd.setCursor(0, 0);
  lcd.print("ARDUINO");
  delay(1000);
  lcd.setCursor(8, 1);
  lcd.print("ARDUINO");
  delay(2000);
  lcd.clear();
  lcd.setCursor(9, 0);
  lcd.print("ARDUINO");
  lcd.setCursor(0, 1);
  lcd.print("ARDUINO");
  delay(5000);
  lcd.clear();
    lcd.setCursor(0, 0);
  lcd.print("ARDUINO");
  delay(1000);
  lcd.setCursor(8, 1);
  lcd.print("ARDUINO");
  delay(2000);
  lcd.clear();
  lcd.setCursor(9, 0);
  lcd.print("ARDUINO");
  lcd.setCursor(0, 1);
  lcd.print("ARDUINO");
  delay(5000);
  lcd.clear();
}
