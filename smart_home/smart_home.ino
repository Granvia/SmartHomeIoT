#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial


#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "***************************"; // token yang dikirim blynk ke email masing2
char ssid[] = "namahostpotmu";
char pass[] = "passwordhostpotmu";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin( auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
