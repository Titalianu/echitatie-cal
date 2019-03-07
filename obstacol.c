#include "obstacol.h"
#include "hal_motor.h"
#include "mcal_interrupts.h"
#include "ASW.h"
#include "RTE.h"


void Tratare_obstacol(void)
{
    
    if(bObstDetected == 0)
        Masinuta();
    else
        vSetMotorSpeed(0);
}

