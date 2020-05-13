/*************************************
 * Program :Project 13 Kirim Notifikasi Email
 * Input : SW1 di pin D2 
 * Output : Email notification
 * Iot Starter Kit Inkubatek
 * www.tokotronik.com
 * ***********************************/
#define BLYNK_MAX_SENDBYTES 1200
#include <ESP8266WiFi.h>

#define BLYNK_PRINT Serial    
#include <BlynkSimpleEsp8266.h>
//ganti dengan kode token yang ada terima di email
char auth[] = "ygioN4zK4byW9DBcFz-F-MjmORFKeRg5";
//ganti dengan jaringan dan password WiFi anda
char ssid[] = "OPPO A1k";
char pass[] = "12345678";


#define tombol D2 
int tbValue; 

void setup()
{
  Serial.begin(115200);
  delay(10);
  Blynk.begin(auth, ssid, pass);
  pinMode(tombol, INPUT);    
}

void loop()
{
  cek_tombol();
  Blynk.run();
}

// **************************************************/
void cek_tombol(void)
{
  tbValue = digitalRead(tombol);
  if (tbValue) 
  { 
    Serial.println("Tombol ON");
    //ganti dengan alamat email anda , Judul Email, Isi Email   
    Blynk.email("adityakens40@gmail.com", "IoT Starter Kit", "Tombol Terdeteksi");
    delay(1000);
  }  
}
