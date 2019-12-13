/************************************************* *************************************************
* OPEN-SMART Rich Shield Lesson 1:  Run four LED
* You can learn how to turn on and turn off the LED.
*
* The following functions are available:
*
* led.on(uint8_t num);//num can be 1, 2, 3, 4 that is consistent with the LED number
* led.off(uint8_t num);
*
************************************************** *******************************************************/

#define LED_AMARELO  7
#define LED_VERDE    6
#define LED_AZUL     5
#define LED_VERMELHO 4

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT); 
}

void loop() {
 
  digitalWrite(LED_AMARELO, HIGH);
  delay(1000);
  digitalWrite(LED_AMARELO, LOW);
  delay(1000);
 
}
