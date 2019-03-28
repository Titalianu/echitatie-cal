#include "hal_linefollower.h"
#include "mcal_gpio.h"
#include "general_types.h"

//output 0
//input 1

void LF_vSetPinsDir(BOOL bDir)
{
	int i=0;
	for(i=0;i<=5;i++)
	{
		GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
	}
}
void LF_vWritePins(void)
{
	LF_vSetPinsDir(OUTPUT);//setare ca output
	int i=0;
	for(i=0;i<=5;i++)
	{
		GPIO_u8WritePortPin(PORT_C,i,HIGH);//aplicare tensiune
	}
}
T_U8 LF_u8ReadPins(void)
{	
	LF_vWritePins();
	__delay_us(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	T_U16 port;
	T_U8 mask=0x3F;
	port=GPIO_u16ReadPort(PORT_C);//Citire port
	T_U8 res=port&mask;
	return res;
}
