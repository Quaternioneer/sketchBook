/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-led-blink-without-delay
 */

// constants won't change:
const int LED_PIN_1 = 3;            // the number of the LED 1 pin
const int LED_PIN_2 = 2;  // the number of the LED 2 pin
const int LED_PIN_3 = 4;
const int N = 3;          // total number of lightsf

const long BLINK_INTERVAL = 700;  // interval at which to blink LED 1 (milliseconds)
const long BLINK_INTERVAL_2 = 650;   // interval at which to blink LED 2 (milliseconds)
const long BLINK_INTERVAL_3 = 600;   // interval at which to blink LED 2 (milliseconds)

// Variables will change:
int ledState_1 = 0;   // ledState used to set the LED 1
int ledState_2 = 0;   // ledState used to set the LED 2
int ledState_3 = 0;   // ledState used to set the LED 2
int i=1;

unsigned long previousMillis = 0;   // will store last time an LED 
unsigned long currentMillis    = 0;

//void setup() {
  //Serial.begin(9600);

  // set the digital pin as output:
  //pinMode(LED_PIN_1, OUTPUT);
  //pinMode(LED_PIN_2, OUTPUT);
  //pinMode(LED_PIN_3, OUTPUT);
  
//} 


int main() 
{
while(1) {
  currentMillis += 100;

  // check to see if it's time to blink the LED 1
  if (currentMillis - previousMillis >= BLINK_INTERVAL) {
    i++;
    i = i%N+1; //Not, i%=N because the index begins at 1 not 0. I vaguely recall this off-by-one error when using modulus arithmentic in C++ for Engineers

    // save the last time you blinked the LED
    previousMillis = currentMillis;
  }

  ledState_1 = ledState_2 = ledState_3 = 0;

      switch (i)
    {
        case 1:
            ledState_1 =  1;
	    break;
        case 2:             
            ledState_2 =  1;
	    break;
        case 3:
            ledState_3 =  1;
	    break;
    }       

  }
}
