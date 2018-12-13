#include "hal_servo.h"
#include "mcal_pwm.h"
#include "general_types.h"
#define  OFFSET_ANGLE 10
#define  OFFSET_DUTYCYCLE 4
#define RESOLUTION 0.04375


T_F16 f16Formula(T_U8 u8Angle)
{

	T_F16 dutyCycle=OFFSET_DUTYCYCLE+RESOLUTION*(u8Angle-OFFSET_ANGLE);
	return dutyCycle;
}
void vSetAngle(T_U8 u8Angle)
{
	if(u8Angle<60)
	{	
		u8Angle=60;//unghi minim 
	}
	else if(u8Angle>120)
	{
		u8Angle=120;//unghi maxim
	}
	T_F16 duty=f16Formula(u8Angle);
	PWM1_vSetDuty(duty,1);
	
}

