
#ifndef SYS_MONITOR_CONFIG_H_
#define SYS_MONITOR_CONFIG_H_

#include "sdkconfig.h"

#define SYS_MONITOR_BUFF_SIZE               ( 1024 )
#define SYS_MONITOR_UPDATE_PERIOD_SEC       1
#define SYS_MONITOR_USE_FLOAT               1
#define SYS_MONITOR_VIEW_RTOS_TIME          1
#define SYS_MONITOR_VIEW_DEBUG_INFO         1

#define SYS_MONITOR_UART_NUM                ( UART_NUM_2 )
#define SYS_MONITOR_TX_PIN                  ( GPIO_NUM_17 )
#define SYS_MONITOR_RX_PIN                  ( GPIO_NUM_16  )

#if CONFIG_FREERTOS_RUN_TIME_STATS_USING_CPU_CLK
  #if CONFIG_ESP32_DEFAULT_CPU_FREQ_80
    #define SYS_MONITOR_STAT_TIMER_FREQ_HZ  80000000
  #elif CONFIG_ESP32_DEFAULT_CPU_FREQ_160
    #define SYS_MONITOR_STAT_TIMER_FREQ_HZ  160000000
  #elif CONFIG_ESP32_DEFAULT_CPU_FREQ_240
    #define SYS_MONITOR_STAT_TIMER_FREQ_HZ  240000000
  #else
    #error "Wrong ESP32 sdk configuration"
  #endif
#elif CONFIG_FREERTOS_RUN_TIME_STATS_USING_ESP_TIMER
  #define SYS_MONITOR_STAT_TIMER_FREQ_HZ    1000000
#else
  #error "Wrong ESP32 sdk configuration"
#endif

#define SYS_MONITOR_TIME_CMN_DIV         10

#endif /* SYS_MONITOR_CONFIG_H_ */
