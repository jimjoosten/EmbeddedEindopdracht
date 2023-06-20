#include "reed.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

bool bHasContact = false;

GPIO_PinState REED_status()
{
    return HAL_GPIO_ReadPin(REED_GPIO_Port, REED_Pin);
}


void Read_Reed()
{

	if (!REED_status() && !bHasContact)
	{
		printf("Reed heeft nu contact");
		bHasContact = true;
		isTimerOn = false;
	}
	else if (REED_status() && bHasContact)
	{
		isTimerOn = true;
		SetTimer();

		printf("Reed heeft geen contact");
		bHasContact = false;
	}

}
