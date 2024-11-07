#include <stdio.h>
#include <oled.h>
#include "esp_log.h"

void app_main(void)
{
    // IIC总线主机初始化
    ESP_ERROR_CHECK(i2c_master_init());
    ESP_LOGI(TAG, "I2C initialized successfully");

    // OLED屏幕初始化
    OLED_Init();

    // 显示汉字
    OLED_ShowCHinese(0 * 18, 0, 0);
    OLED_ShowCHinese(1 * 18, 0, 1);
    OLED_ShowCHinese(2 * 18, 0, 2);

    // 显示单个字符
    OLED_ShowChar(0, 2, 'A', 16);

    // 显示字符串
    OLED_ShowString(0, 4, "MAxuhui tale", 16);

    // 显示数字
    OLED_ShowNum(0, 6, 8300, 6, 16);

    // 删除IIC设备
    // ESP_ERROR_CHECK(i2c_driver_delete(I2C_MASTER_NUM));
    // ESP_LOGI(TAG, "I2C unitialized successfully");
}