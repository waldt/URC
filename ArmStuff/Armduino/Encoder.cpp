#include "Arduino.h"
#include "Encoder.h"
#include "ros.h";
#include <std_msgs/UInt16.h>
#include <std_msgs/Float32.h>

Encoder::Encoder(int A, int B){
  pinA = A;
  pinB = B;
  countValueA = 0;
  countValueB = 0;
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
}
std_msgs::UInt16 Encoder::getEncoderValues(){
	std_msgs::UInt16 value = (countValueA+countValueB)/2;
	return (value > 0) ? (value):(1);
}
void Encoder::doEncoderA(){
	countValueA++;
}
void Encoder::doEncoderB(){
	countValueB++;
}