#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("ESP32 Project gestartet!\n");

    while (1)
    {
        printf("Läuft...\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
