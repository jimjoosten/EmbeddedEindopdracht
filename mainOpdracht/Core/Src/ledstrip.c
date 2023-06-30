#include "ledstrip.h"
#include "main.h"
#include <stdio.h>
#include <stdbool.h>

extern bool buzzerIsPlaying;

void ledstrip_Pulse(){
    if (!HAL_GPIO_ReadPin(ROTARY_SWITCH_GPIO_Port, ROTARY_SWITCH_Pin))
    {
    	HAL_GPIO_WritePin(BUZZER_GROVE_GPIO_Port, BUZZER_GROVE_Pin, GPIO_PIN_RESET);

    	// LED ROOD
    	ws2812_Set_LED(0, 255, 0, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	// LED GROEN
    	ws2812_Set_LED(1, 0, 255, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	// LED GEEL
    	ws2812_Set_LED(2, 255, 255, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	// LED ORANJE
    	ws2812_Set_LED(3, 255, 69, 0);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	// LED BLAUW
    	ws2812_Set_LED(4, 0, 0, 255);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	// LED ROZE
    	ws2812_Set_LED(5, 255, 20, 147);
    	ws2812_Send_PWM();
    	HAL_Delay(200);

    	buzzerIsPlaying = false;
    }
}
