#include "ledstrip.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

void ledstrip_Pulse(){
	ws2812_SetAll_LED(30, 0, 0);
	ws2812_Send_PWM();
	HAL_Delay(1000);
	ws2812_SetAll_LED(30, 63, 0);
	ws2812_Send_PWM();
	HAL_Delay(1000);
}

// voorbeeldcode:

/*  ws2812_SetAll_LED(0, 0, 0);
  for (int i = 0; i < WS2812_LED_MAX; i++)
  {
    ws2812_Set_LED(i, 30, 30, 30);
    ws2812_Send_PWM();
    HAL_Delay(500);
  }*/
