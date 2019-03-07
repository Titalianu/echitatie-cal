#include "hal_linefollower.h"
#include "hal_motor.h"
#include "hal_encoder.h"
#include "obstacol.h"
#include "RTE.h"
#include "general_types.h"
#include "ASW.h"
/*--------------------------------
	Directie:
			0-->Inainte
			1-->Inapoi
	Viteza:
			0-100
	Unghi viraj:
			60:Stanga complet
			120:Dreapta complet
----------------------------------*/
 T_F16 centimetri_parcursi=0;
void Masinuta(void)
{	
	//Variabile
	//T_U8 color;	
	//Status Initial (Mers inainte)
	RTE_Direction(0);
	RTE_Speed(20);

    
    centimetri_parcursi+=QEI_s16getElapsed();
    if(centimetri_parcursi>=30)
    {
        centimetri_parcursi=0;
        RTE_Speed(0);
    }
 
    /*
	color=RTE_Follower();
	switch(color){
	case 0b1100://linie dreapta
		RTE_Servo(90);
	break;
    case 0b11110://linie dreapta
		RTE_Servo(90);
	break;
	case 0b11000:
		RTE_Servo(75);
	break;
    case 0b111000:
		RTE_Servo(75);
	break;
	case 0b110000:
		RTE_Servo(60);	
	break;
	case 0b110:
		RTE_Servo(115);
	break;
	case 0b11:
		RTE_Servo(120);	
	break;
    case 0b111:
		RTE_Servo(120);	
	break;
	default:
		 RTE_Servo(90);
		RTE_Speed(20);
	break;
	
	}
	
    */
}
