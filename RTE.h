#ifndef RTE_H
#define RTE_H

#include "hal_servo.h"
#include "hal_linefollower.h"
#include "hal_motor.h"

//DEFINES
//Urmareste traseul
#define RTE_Follower() LF_u8ReadPins()
//Seteaza directia de mers
#define RTE_Direction(direction) vSetMotorDir(direction)
//Seteaza viteza
#define RTE_Speed(speed) vSetMotorSpeed(speed)
//Seteaza servo stanga/dreapta
#define RTE_Servo(angle) vSetAngle(angle)

#endif

