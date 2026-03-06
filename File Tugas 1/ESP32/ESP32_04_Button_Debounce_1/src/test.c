#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN_1   GPIO_NUM_13
#define LED_PIN_2   GPIO_NUM_0
#define BUTTON_PIN  GPIO_NUM_12

void app_main(void)
{
    gpio_reset_pin(LED_PIN_1);
    gpio_set_direction(LED_PIN_1, GPIO_MODE_OUTPUT);
    gpio_reset_pin(LED_PIN_2);
    gpio_set_direction(LED_PIN_2, GPIO_MODE_OUTPUT);

    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << BUTTON_PIN),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_ENABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    while (1)
    {
      int state = gpio_get_level(BUTTON_PIN);
      printf("Button: %d\n", state);

      if (state == 0){
        gpio_set_level(LED_PIN_1, 1);
        vTaskDelay(20);
      }
      else {
        gpio_set_level(LED_PIN_1, 0);
      }
      vTaskDelay(pdMS_TO_TICKS(200));
    
    }
}