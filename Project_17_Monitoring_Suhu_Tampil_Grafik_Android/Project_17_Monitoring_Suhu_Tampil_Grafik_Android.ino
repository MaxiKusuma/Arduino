/*************************************
 * Program :Project 17 Monitoring Suhu LM35 Tampilan Grafik di Android
 * Input : Sensor LM35 
 * Output : Grafik Blynk
 * Iot Starter Kit Inkubatek
 * www.tokotronik.com
 * ***********************************/
#define BLYNK_PRINT Serial 
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>

SimpleTimer timer;
int adc0;
int outputpin= A0;
float celcius,millivolts;

// Ganti dengan kode token anda
char auth[] = "YOh356PlUgoWmciVQNs5AceKgPDKULhi"; 
// Ganti dengan WiFi dan Password anda
char ssid[] = "OPPO A1k";
char pass[] = "12345678";

void setup()
{
  Serial.begin(115200); 
  delay(10);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000, sendData);
}

void sendData()
{   
  adc0 = analogRead(outputpin);
  millivolts = (adc0/1024.0) * 3300; 
  celcius = millivolts/10;
  Serial.println(celcius);
  Blynk.virtualWrite(0, celcius);//virtual input V10 di Blynk (suhu) 
}

void loop()
{
  Blynk.run();
  timer.run();
}
