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

void Masinuta(void)
{	
	//Variabile
	T_U8 black=0b1100;
	T_U8 color;	
	
	T_U8 blackS1=black<<1;
	T_U8 blackS2=black<<2;
	T_U8 blackD1=black>>1;
	T_U8 blackD2=black>>2;
	
	//Status Initial (Mers inainte)
	RTE_Direction(0);
	RTE_Speed(20);	

	color=RTE_Follower();
	switch(color){
	case 0b1100:
		RTE_Servo(90);
	break;
	case 0b11000:
		RTE_Servo(70);
	break;
	case 0b110000:
		RTE_Servo(65);	
	break;
	case 0b110:
		RTE_Servo(110);
	break;
	case 0b11:
		RTE_Servo(115);	
	break;
	default:
		//RTE_Servo(90);
		RTE_Speed(20);
	break;
	
	}
	

}
