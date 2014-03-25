/*
 * Author: Laurent Goderre
 */

#include <stdio.h>
#include <Arduino.h>
#include <Adafruit_PWMServoDriver.h>
#include "Target.h"

Target::Target(int targetNumber, Adafruit_PWMServoDriver pwm, int servoNumber) : number(targetNumber), pwm(pwm), servoNumber(servoNumber) {}

Target::~Target(void){}

void Target::show()
{
	Serial.println("Showing target #" + (number + 1));
}

void Target::hide()
{
	Serial.println("Hiding target #" + (number + 1));
}


