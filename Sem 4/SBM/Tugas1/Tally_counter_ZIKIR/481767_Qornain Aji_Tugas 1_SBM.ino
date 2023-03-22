#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

unsigned long currentTime = millis();

int count = 0;

const int addButtonPin = 27;
const int reduceButtonPin = 5;


void setup() {
  Serial.begin(115200);
  pinMode(addButtonPin, INPUT_PULLUP);
  pinMode(reduceButtonPin, INPUT_PULLUP);
  // pinMode(resetButtonPin, INPUT_PULLUP);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(3);
  display.setCursor(35, 10);
  display.println("Zikir");
  display.display();


}

void loop() {
  if (digitalRead(addButtonPin) == LOW && digitalRead(reduceButtonPin) == HIGH) {
     if (digitalRead(addButtonPin) == LOW && currentTime - millis() > 50) {
      count++;
      display.clearDisplay();
      display.setCursor(35, 10);
      display.print("Zikir: ");
      display.println(count);
      display.display();
      delay(250);
     }
  }
  if (digitalRead(reduceButtonPin) == LOW && digitalRead(addButtonPin) == HIGH) {
     if (digitalRead(reduceButtonPin) == LOW && currentTime - millis() > 50) {
      count--;
      display.clearDisplay();
       display.setTextSize(2);
      display.setCursor(35, 10);
      display.print("Anda   Berdosa: ");
      display.println(count);
      display.display();
      delay(250);
     }
  }
  if (digitalRead(addButtonPin) == LOW && digitalRead(reduceButtonPin) == LOW) {
    if (digitalRead(addButtonPin) == LOW && digitalRead(reduceButtonPin) == LOW && currentTime - millis() > 50) {
      count = 0;
      display.clearDisplay();
       display.setTextSize(2);
      display.setCursor(35, 10);
      display.print("Zikir   Yuk: ");
      display.println(count);
      display.display();
      delay(250);
    }
  }
}