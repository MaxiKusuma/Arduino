/*************************************
 * Program : Tes NodeMCU V3
 * Input : -
 * Output : LED1 Blink 1 detik
 * Iot Starter Kit Inkubatek
 * www.tokotronik.com
 * ***********************************/
#define LED_pin D5
#define LED_pin D6
#define LED_pin D7
#define LED_pin D8
void setup() {
  pinMode(LED_pin, OUTPUT);     
}

void loop() {
  digitalWrite(LED_pin, LOW);                                       
  delay(1000);                     
  digitalWrite(LED_pin, HIGH); 
  delay(1000);                      
}
