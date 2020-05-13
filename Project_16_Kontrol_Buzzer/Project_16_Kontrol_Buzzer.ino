/*************************************
 * Program :Project 16 Kontrol Buzzer
 * Input : - 
 * Output : Buzzer di D1
 * Iot Starter Kit Inkubatek
 * www.tokotronik.com
 * ***********************************/
 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//Ganti dengan Token anda
char auth[] = "ZIp_KA4FHWjwGRcKJ1q9t3EOAEGgwDYC";

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
