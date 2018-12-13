#include "general.h"
#include "hal_motor.h"

int main()
{
	TASK_Inits();
	TASK_vSchedule();
	while(1)
	{
	}
    return 0;
}