#include <prReshaper.h>
#include <ESP32Lib.h>
#include <GfxWrapper.h>
#include <U8g2_for_Adafruit_GFX.h>

//VGA Device
VGA3Bit vga;
GfxWrapper<VGA3Bit> gfx(vga, 400, 300);
const int16_t bluePin = 32; //d32
const int16_t greenPin = 33; 
const int16_t redPin = 25;
const int16_t hsyncPin = 26;
const int16_t vsyncPin = 27;

//----------------------------------------------------------------------------
#define LCDWidth                        400
#define ALIGNE_CENTER(t)                 ((LCDWidth - (u8g2_for_adafruit_gfx.getUTF8Width(t))) / 2)
#define ALIGNE_RIGHT(t)                  (LCDWidth - u8g2_for_adafruit_gfx.getUTF8Width(t))
#define ALIGNE_LEFT                      0
#define IS_UNICODE(c)                   (((c) & 0xc0) == 0xc0)
#define VERSION       1
#define WHITE 0xffffff
//----------------------------------------------------------------------------
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;


void setup(void) {
  Serial.begin(115200);
  vga.init(vga.MODE400x300, redPin, greenPin, bluePin, hsyncPin, vsyncPin);
  //using adafruit gfx
  u8g2_for_adafruit_gfx.begin(gfx);
  gfx.print("Hello");
  }
//----------------------------------------------------------------------------
void loop(void){
  
  String msg1; 
  int16_t x = 4;
  int16_t y = 25;
  u8g2_for_adafruit_gfx.setFont(u8g2_font_10x20_t_arabic);  // select u8g2 font from here: https://github.com/olikraus/u8g2/wiki/fntlistall
  u8g2_for_adafruit_gfx.setFontMode(1);                 // use u8g2 transparent mode (this is default)
  u8g2_for_adafruit_gfx.setForegroundColor(WHITE);      // apply Adafruit GFX color

  char txt[] = "الحمدلله الذي بنعمته تتم الصالحات";  
  msg1 = prReshaper123(txt) ;
    
  u8g2_for_adafruit_gfx.setCursor(ALIGNE_RIGHT(txt), y);                // start writing at this Right
  u8g2_for_adafruit_gfx.print(msg1);
  delay(3000);
  
  char txt2[] = "ومن يتق الله يجعل له مخرجا ";  
  msg1 = prReshaper123(txt2) ;   
  u8g2_for_adafruit_gfx.setCursor(ALIGNE_CENTER(txt2), y*2);                // start writing at this CENTER
  u8g2_for_adafruit_gfx.print(msg1);

   
}
