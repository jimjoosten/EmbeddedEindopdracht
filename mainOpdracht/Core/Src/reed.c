#include "reed.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

bool bHasContact = false;
bool isTimerOn = false;
extern TIM_HandleTypeDef htim16;

GPIO_PinState REED_status()
{
    return HAL_GPIO_ReadPin(REED_GPIO_Port, REED_Pin);
}

void SetTimer() {
	HAL_TIM_Base_Start_IT(&htim16);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (!bHasContact) { // kijken of contact is anders starten we het alarm.
		printf("Timer is gestart!");
		// Trigger function
		StartAlarm();
	}
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
