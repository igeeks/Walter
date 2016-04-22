/* 
* MotorDriver.h
*
* Created: 20.04.2016 15:21:40
* Author: JochenAlt
*/


#ifndef __MOTORDRIVER_HERKULEX_IMPL_H__
#define __MOTORDRIVER_HERKULEX_IMPL_H__


#include <Arduino.h>
#include <Herkulex.h>
#include "MotorDriver.h"

class MotorDriverHerkulexImpl: public MotorDriver
{
//functions
public:
	MotorDriverHerkulexImpl(): MotorDriver (){
		currentAngle = 0;
	}
	
	void setup(int motorNumber, long baudrate);
	virtual void loop();
	virtual void setAngle(float angle, long pDuration_ms);
	virtual float getAngle();
		
private:	
	HerkulexClass herkulexServo; 
	float currentAngle;
}; //MotorDriver

#endif //__MOTORDRIVER_HERKULEX_IMPL_H__
