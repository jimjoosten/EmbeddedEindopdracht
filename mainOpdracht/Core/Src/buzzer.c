#include "buzzer.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

int iBuzzTeller = 0;
bool bAlreadyPlayed = false;

void Play_Buzzer(bool buzzer)
{
	if (buzzer){
		iBuzzTeller++;
		if (iBuzzTeller >= 30000 && bAlreadyPlayed == 0) {
			HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_SET);
			bAlreadyPlayed = true;
		} else if (iBuzzTeller >= 60000 && bAlreadyPlayed == 1) {
			HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_RESET);
			bAlreadyPlayed = false;
		}
	}
}
