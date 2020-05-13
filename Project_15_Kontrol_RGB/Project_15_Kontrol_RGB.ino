/*************************************
 * Program :Project 15 Kontrol LED RGB
 * Input : 
 * Output : RGB LED
 * Iot Starter Kit Inkubatek
 * www.tokotronik.com
 * ***********************************/
 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//Ganti dengan Token anda
char auth[] = "C8uoDOrrAaL7bv7OqN8_yIOqpW3gJ9Y3";

// Ganti dengan WiFi anda
char ssid[] = "OPPO A1k";
char pass[] = "12345678";

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);  
}

void loop()
{
  Blynk.run(); 
}
