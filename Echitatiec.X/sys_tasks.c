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
#include "hal_nRF.h"

#include "mcal_init.h"
#include "ASW.h"

T_U8 Charge_lev;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
    RF_vInit();
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
     Masinuta(); 
    //COM_vStartListening(); 
    //COM_vCheckIRQ();
    //COM_vProcessFIFO(); 
}

void TASK_500ms()
{ 
    //Tratare_obstacol();
}

void TASK_1000ms()
{	
    //Charge_lev= CarBatteryLevel();
   
}