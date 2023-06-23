#include "ledstrip.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

void ledstrip_Pulse(){
    if (!HAL_GPIO_ReadPin(ROTARY_SWITCH_GPIO_Port, ROTARY_SWITCH_Pin))
    {
    	// LED ROOD
    	ws2812_Set_LED(0, 255, 0, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);

    	// LED GROEN
    	ws2812_Set_LED(1, 0, 255, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);

    	// LED GEEL
    	ws2812_Set_LED(2, 255, 255, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);

    	// LED ORANJE
    	ws2812_Set_LED(3, 255, 69, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);

    	// LED BLAUW
    	ws2812_Set_LED(4, 0, 0, 255);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);

    	// LED ROZE
    	ws2812_Set_LED(5, 255, 20, 147);
    	ws2812_Send_PWM();
    	HAL_Delay(1000);
    }


/*	ws2812_SetAll_LED(30, 0, 0);
	ws2812_Send_PWM();
	HAL_Delay(1000);
	ws2812_SetAll_LED(30, 63, 0);
	ws2812_Send_PWM();
	HAL_Delay(1000);*/
}

// voorbeeldcode:

/*  ws2812_SetAll_LED(0, 0, 0);
  for (int i = 0; i < WS2812_LED_MAX; i++)
  {
    ws2812_Set_LED(i, 30, 30, 30);
    ws2812_Send_PWM();
    HAL_Delay(500);
  }*/
