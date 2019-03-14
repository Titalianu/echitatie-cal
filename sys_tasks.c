/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "hal_battery.h"
#include "hal_encoder.h"
#include "obstacol.h"
#include "asw_com.h"

#include "mcal_init.h"
#include "ASW.h"

T_U8 Charge_lev;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
    QEI_vInit();//setare impulsuri la 32000(mijloc)
}

void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    COM_vStartListening(); 
    COM_vCheckIRQ();
    COM_vProcessFIFO(); 
}

void TASK_500ms()
{ 
    Tratare_obstacol();
   	//Masinuta(); 
}

void TASK_1000ms()
{	
    //Charge_lev= CarBatteryLevel();
   
}