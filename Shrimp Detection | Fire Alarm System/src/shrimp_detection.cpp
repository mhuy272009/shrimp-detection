#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <DHT.h>
#include <Arduino.h>

#define DenCanhBaoNhiet 2   // LED Đỏ
#define DenCanhBaoAm 4      // LED Vàng
#define CamBienNhietDo 25

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define DHTTYPE DHT22
DHT dht(CamBienNhietDo, DHTTYPE);

void setup() {
  Serial.begin(115200);

  pinMode(DenCanhBaoNhiet, OUTPUT);
  pinMode(DenCanhBaoAm, OUTPUT);

  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(15, 20);
  display.println("FIRE ALARM SYSTEM");
  display.setCursor(35, 40);
  display.println("STARTING...");
  display.display();
  delay(2000);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();    // Độ C
  float f = dht.readTemperature(true); // Độ F

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("DHT SENSOR ERROR!"));
    display.clearDisplay();
    display.setCursor(0, 0);
    display.print("SENSOR ERROR!");
    display.display();
    return;
  }

  bool CanhBaoNhiet = (t < 20 || t > 40);
  digitalWrite(DenCanhBaoNhiet, CanhBaoNhiet ? HIGH : LOW);

  bool CanhBaoAm = (h < 50 || h > 80);
  digitalWrite(DenCanhBaoAm, CanhBaoAm ? HIGH : LOW);

  display.clearDisplay();

  if (CanhBaoNhiet || CanhBaoAm) {
    // Giao diện khi có CẢNH BÁO
    display.setTextSize(2);
    display.setCursor(25, 0);
    display.println(F("ALERT!"));

    display.setTextSize(1);
    display.setCursor(0, 25);
    
    if (CanhBaoNhiet) {
      display.println(t > 40 ? F("- HIGH TEMPERATURE") : F("- LOW TEMPERATURE"));
    }
    if (CanhBaoAm) {
      display.println(h > 80 ? F("- HIGH HUMIDITY") : F("- LOW HUMIDITY"));
    }

    display.setCursor(0, 50);
    display.print("T: "); display.print(t, 1); display.print("C");
    display.print(" | H: "); display.print(h, 0); display.print("%");
  } 
  else {
    // Giao diện khi AN TOÀN
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.println(F("STATUS: SAFE"));
    display.drawFastHLine(0, 12, 128, SSD1306_WHITE); // Kẻ đường ngang trang trí

    display.setCursor(0, 20);
    display.print(F("Temperature (C): ")); display.println(t, 1);
    display.setCursor(0, 35);
    display.print(F("Temperature (F): ")); display.println(f, 1);
    display.setCursor(0, 50);
    display.print(F("Humidity: ")); display.print(h, 1); display.println(F("%"));
  }

  display.display();

  Serial.print(F("T: ")); Serial.print(t);
  Serial.print(F("C | H: ")); Serial.print(h);
  Serial.print(F("% | Warn T: ")); Serial.print(CanhBaoNhiet);
  Serial.print(F(" | Warn H: ")); Serial.println(CanhBaoAm);

  delay(500); 
}
