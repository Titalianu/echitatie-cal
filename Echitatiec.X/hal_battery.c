#include "general_types.h"
#include "hal_battery.h"
#include "general_types.h"
#include "mcal_adc.h"
#define V_ref 3.07

T_U8 CarBatteryLevel()
{
    T_F16 V_citita;
    T_F16 V_baterie;
    T_F16 delta_V;
    T_U8 Charge_level;
    T_U8 Rez1, Rez2, Rez3;
    
    //preluare date baterie
    T_U16 data=ADC_u16Read(0);
    //calcularea voltajului citit 
    V_citita=((float)data/4095)*V_ref;
    //calcul voltaj baterie
    V_baterie=V_citita*4;
    
    //tratare extreme
    if(V_baterie>=8.4)
        return 100;
    else if(V_baterie<=6)
        return 0;
    
    //tratare pe intervale 
    if(V_baterie < 8.4 && V_baterie > 7)
    {
        delta_V=8.4-V_baterie;
        Rez1=57;
        Charge_level=100-(delta_V*Rez1);
        
    }else if(V_baterie < 7 && V_baterie > 6.5)
    {
        delta_V=7-V_baterie;
        Rez2=20;
        Charge_level=20-(delta_V*Rez2);
        
    }else if(V_baterie<6.5 && V_baterie > 6)
    {
        delta_V=6.5-V_baterie;
        Rez3=20;
        Charge_level=10-(delta_V*Rez3);
        
    }
    
    return Charge_level;
}
