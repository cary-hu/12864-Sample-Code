#include <U8g2lib.h>

U8G2_ST7920_128X64_F_SW_SPI u8g2(U8G2_R0, 4, 3, 2);

void setup(void) {
  u8g2.begin();
  u8g2.enableUTF8Print();
  u8g2.setFont(u8g2_font_unifont_t_chinese2);
}

void loop(void) {
  u8g2.firstPage();
  do {
    u8g2.setCursor(0, 20);
    u8g2.print("显示高度：");
    u8g2.setCursor(65, 20);
    u8g2.print(u8g2.getDisplayHeight());
    u8g2.setCursor(0, 40);
    u8g2.print("显示宽度：");
    u8g2.setCursor(65, 40);
    u8g2.print(u8g2.getDisplayWidth());
  } while ( u8g2.nextPage() );
  delay(500);
}
