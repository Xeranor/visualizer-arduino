#include <Arduino.h>
#define CH_BLUE 9
#define CH_RED 11
#define CH_GREEN 10
uint8_t buffer[3];

void setup(){
	Serial.begin(9600);
	pinMode(CH_BLUE,OUTPUT);
	pinMode(CH_RED,OUTPUT);
	pinMode(CH_GREEN,OUTPUT);
}

void loop(){
	if (Serial.available() > 2) {
		Serial.readBytes(buffer,3);
		analogWrite(CH_RED,buffer[0]);
		analogWrite(CH_GREEN,buffer[1]);
		analogWrite(CH_BLUE,buffer[2]);
	}
}
