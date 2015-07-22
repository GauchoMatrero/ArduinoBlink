#include <Arduino.h>
#define LED_ PB5 
int main() {
  // initialize digital pin 13 as an output.
  pinMode(LED_, OUTPUT);
  digitalWrite(LED_, LOW);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);              // wait for a second

// the loop function runs over and over again forever
	for (;;)
	{
		unsigned int led = LED_;
		digitalWrite(LED_, HIGH);   // turn the LED on (HIGH is the voltage level)
//		delay(500);              // wait for a second
		digitalWrite(LED_, LOW);   // turn the LED OFF (HIGH is the voltage level)
//		delay(500);              // wait for a second
	}
}