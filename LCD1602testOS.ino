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
  


void setup() {
  lcd.init(); 
  lcd.backlight(); 
  lcd.setCursor(0, 0);
  lcd.print("ARDUINO");
  delay(3000);
  lcd.setCursor(8, 1);
  lcd.print("ARDUINO");
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Загруска      ");
  delay(5000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("By:SasiskaMine");
  lcd.setCursor(0, 1);
  lcd.print("1234567890ABCАБВ");
}
