#include "buzzer.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

void Play_Buzzer(bool buzzer)
{
	if (buzzer){
	    HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_SET);
	    HAL_Delay(500);
	    HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_RESET);
	    HAL_Delay(250);
	}
}
