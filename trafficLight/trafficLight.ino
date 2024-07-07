/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-led-blink-without-delay
 */

// constants won't change:
const int LED_PIN_1 = 2;            // the number of the LED 1 pin
const int LED_PIN_2 = 3;  // the number of the LED 2 pin
const int LED_PIN_3 = 4;
const int N = 3;          // total number of lightsf

long BLINK_INTERVAL = 9000;  // interval at which to blink LED 1 (milliseconds)

// Variables will change:
int ledState_1 = LOW;   // ledState used to set the LED 1
int ledState_2 = LOW;   // ledState used to set the LED 2
int ledState_3 = LOW;   // ledState used to set the LED 2
int i=1;

unsigned long previousMillis = 0;   // will store last time an LED 
unsigned long currentMillis    = 0;

void setup() {
  Serial.begin(9600);

  // set the digital pin as output:
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  
}

void loop() {
  i++;
  i = i%N+1; //Not, i%=N because the index begins at 1 not 0. I vaguely recall this off-by-one error when using modulus arithmentic in C++ for Engineers

  
  ledState_1 = ledState_2 = ledState_3 = LOW;

      switch (i)
    {
        case 1:
            ledState_1 =  HIGH;
            BLINK_INTERVAL = 1000;
            break;
        case 2:             
            ledState_2 =  HIGH;
            BLINK_INTERVAL = 2000;
            break;
        case 3:
            ledState_3 =  HIGH;
            BLINK_INTERVAL = 3000;
            break;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(LED_PIN_1, ledState_1);
    // set the LED with the ledState of the variable:
    digitalWrite(LED_PIN_2, ledState_2);
    // set the LED with the ledState of the variable:
    digitalWrite(LED_PIN_3, ledState_3); 

    delay(BLINK_INTERVAL);

  }
