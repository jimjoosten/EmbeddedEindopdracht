#ifndef ledstrip_h
#define ledstrip_h

void ws2812_SetAll_LED(int Red, int Green, int Blue);
void ws2812_Send_PWM(void);
void ledstrip_Pulse();

#endif
