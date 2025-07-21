#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(2, INPUT);

  lcd_1.clear();
  lcd_1.print("#### IFMG ####");
  delay(2000);
  lcd_1.clear();
}

void loop()
{
  lcd_1.setCursor(0, 0);
  if (digitalRead(2) == HIGH) {
    lcd_1.print("Chave Ligada");
  } else {
    lcd_1.print("Chave Desligada");
  }
  delay(10);
}
