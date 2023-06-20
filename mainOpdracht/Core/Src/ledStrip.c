#include "ledStrip.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

void ledStrip_On()
{
	  ws2812_SetAll_LED(30, 0, 0);
	  ws2812_Send_PWM();
	  HAL_Delay(1000);
	  ws2812_SetAll_LED(30, 63, 0);
	  ws2812_Send_PWM();
	  HAL_Delay(1000);
}
