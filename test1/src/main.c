  
/* Blink Example
   This example code is in the Public Domain (or CC0 licensed, at your option.)
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

/* Can use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
   or you can edit the following line and set a number here.
*/
#define PIN 2

void app_main(void)
{
    gpio_pad_select_gpio(PIN);
    gpio_set_direction(PIN,GPIO_MODE_OUTPUT);
    int isOn=1;
    while (1)
    {
        /* code */
        isOn=isOn;
        gpio_set_level(PIN,isOn);
        vTaskDelay(300);
        gpio_set_level(PIN,0);
        vTaskDelay(500);
        /*

        experimentos


        */
    }

    
    
}