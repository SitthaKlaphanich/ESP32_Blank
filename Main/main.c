#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
void SET_LED_OUTPUT();
void LED_NO();
void LED_OFF();

void app_main(void)
{
    SET_LED_OUTPUT();
    while (1)  {
           LED_NO(); 
           vTaskDelay(500 / portTICK_PERIOD_MS);       
           LED_OFF();
           vTaskDelay(500 / portTICK_PERIOD_MS);
        }       
}
