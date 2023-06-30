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
		if (iBuzzTeller >= 40000 && !bAlreadyPlayed) {
			HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_SET);
			bAlreadyPlayed = true;
		} else if (iBuzzTeller >= 80000 && bAlreadyPlayed) {
			HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_RESET);
			bAlreadyPlayed = false;
			iBuzzTeller = 0;
		}
	}
}
