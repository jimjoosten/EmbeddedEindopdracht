#include "rotary.h"
#include "main.h"
#include <stdio.h>

int16_t readValue = 0;
int prevVal = 0;
int iTimer = 0;
int newVal;

int lookupTable[4][4] =
    {
        {0, -1, 1, 2},
        {1, 0, 2, -1},
        {-1, 2, 0, 1},
        {2, 1, -1, 0}
    };

int clockState = 0;
int counterClockState = 0;

int _write(int file, char *ptr, int len)
{
  CDC_Transmit_FS((uint8_t *)ptr, len);
  return len;
}

void Read_Rotary()
{
    int valA = HAL_GPIO_ReadPin(ROTARY1_GPIO_Port, ROTARY1_Pin);
    int valB = HAL_GPIO_ReadPin(ROTARY2_GPIO_Port, ROTARY2_Pin);
    newVal = (valA << 1) + valB;

    int info = lookupTable[prevVal][newVal];

    if (info == 1)
    {
        clockState |= (1 << newVal);
    }
    else if (info == -1)
    {
        counterClockState |= (1 << newVal);
    }
    else if (info == 2)
    {
        // skipped a value
    }

    if (prevVal != newVal && newVal == 3)
    {
        if (clockState == 0b1011 || clockState == 0b1101 || clockState == 0b1110 || clockState == 0b1111)
        {
            readValue++; // clockwise
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
        }
        if (counterClockState == 0b1011 || counterClockState == 0b1101 || counterClockState == 0b1110 || counterClockState == 0b1111)
        {
            readValue--; // counterclockwise
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
        }
        clockState = 0;
        counterClockState = 0;
    }
    prevVal = newVal;

    if (iTimer > 20000)
    {
        printf("De teller is: %d\r\n", readValue);
        iTimer = 0;
    }
    iTimer++;

    if (!HAL_GPIO_ReadPin(ROTARY_SWITCH_GPIO_Port, ROTARY_SWITCH_Pin))
        {
          readValue = 0;
        }
}
