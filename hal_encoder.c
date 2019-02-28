#include "general_types.h"
#include "hal_encoder.h"
#include "mcal_encoder.h"
#define impuls_initial 32000
#define centimetru 100
T_F16 QEI_s16getElapsed()
{
    T_F16 rezultat;
   
    rezultat=(impuls_initial-QEI_u16getCount())/centimetru;
    QEI_vResetCount();
    return rezultat;//distanta parcursa in centimetri 
    
}
