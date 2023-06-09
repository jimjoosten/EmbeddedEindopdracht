#include "reed.h"
#include "main.h"
#include <stdio.h>




GPIO_PinState REED_status()
{
    return HAL_GPIO_ReadPin(REED_GPIO_Port, REED_Pin);
}


void Read_Reed()
{
	#if 1
		if (!REED_status())
		{
			printf("Reed heeft nu contact");
		}
		else
		{
			printf("Reed heeft geen contact");
		}
	#else
		if (!REED_status())
		{
			printf("Reed heeft nu contact");
		}
		else
		{
			printf("Reed heeft geen contact");
		}
	#endif
}
