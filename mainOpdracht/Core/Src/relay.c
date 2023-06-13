#include "relay.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

void Relay_On()
{
	HAL_GPIO_WritePin(RELAY_GPIO_Port, RELAY_Pin, GPIO_PIN_SET);
}

void Relay_Off()
{
	HAL_GPIO_WritePin(RELAY_GPIO_Port, RELAY_Pin, GPIO_PIN_RESET);
}
