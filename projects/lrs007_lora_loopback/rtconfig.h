#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_HOOK_USING_FUNC_PTR
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 512

/* kservice optimization */

/* end of kservice optimization */
#define RT_DEBUG

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
/* end of Inter-Thread communication */

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
#define RT_MEMHEAP_FAST_MODE
#define RT_USING_MEMHEAP_AS_HEAP
#define RT_USING_MEMHEAP_AUTO_BINDING
#define RT_USING_HEAP
/* end of Memory Management */

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart4"
/* end of Kernel Device Object */
#define RT_VER_NUM 0x40100
/* end of RT-Thread Kernel */
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M7

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10
#define RT_USING_MSH
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_CMD_SIZE 80
#define MSH_USING_BUILT_IN_COMMANDS
#define FINSH_USING_DESCRIPTION
#define FINSH_ARG_MAX 10

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 2048
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_USING_SERIAL_V1
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_SPI

/* Using USB */

/* end of Using USB */
/* end of Device Drivers */

/* C/C++ and POSIX layer */

#define RT_LIBC_DEFAULT_TIMEZONE 8

/* POSIX (Portable Operating System Interface) layer */


/* Interprocess Communication (IPC) */


/* Socket is in the 'Network' category */

/* end of Interprocess Communication (IPC) */
/* end of POSIX (Portable Operating System Interface) layer */
/* end of C/C++ and POSIX layer */

/* Network */

#define RT_USING_SAL
#define SAL_INTERNET_CHECK
#define SAL_SOCKETS_NUM 16
#define RT_USING_NETDEV
#define NETDEV_USING_IFCONFIG
#define NETDEV_USING_PING
#define NETDEV_USING_NETSTAT
#define NETDEV_USING_AUTO_DEFAULT
#define NETDEV_IPV4 1
#define NETDEV_IPV6 0
/* end of Network */

/* Utilities */

#define RT_USING_ULOG
#define ULOG_OUTPUT_LVL_D
#define ULOG_OUTPUT_LVL 7
#define ULOG_ASSERT_ENABLE
#define ULOG_LINE_BUF_SIZE 1024

/* log format */

#define ULOG_USING_COLOR
#define ULOG_OUTPUT_TIME
#define ULOG_OUTPUT_LEVEL
#define ULOG_OUTPUT_TAG
/* end of log format */
#define ULOG_BACKEND_USING_CONSOLE
#define ULOG_USING_FILTER
/* end of Utilities */
/* end of RT-Thread Components */

/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */

/* end of Marvell WiFi */

/* Wiced WiFi */

/* end of Wiced WiFi */
/* end of Wi-Fi */

/* IoT Cloud */

/* end of IoT Cloud */
#define PKG_USING_LORA_GW_DRIVER_LIB
/* end of IoT - internet of things */

/* security packages */

/* end of security packages */

/* language packages */

/* JSON: JavaScript Object Notation, a lightweight data-interchange format */

/* end of JSON: JavaScript Object Notation, a lightweight data-interchange format */

/* XML: Extensible Markup Language */

/* end of XML: Extensible Markup Language */
/* end of language packages */

/* multimedia packages */

/* LVGL: powerful and easy-to-use embedded GUI library */

/* end of LVGL: powerful and easy-to-use embedded GUI library */

/* u8g2: a monochrome graphic library */

/* end of u8g2: a monochrome graphic library */

/* PainterEngine: A cross-platform graphics application framework written in C language */

/* end of PainterEngine: A cross-platform graphics application framework written in C language */
/* end of multimedia packages */

/* tools packages */

/* end of tools packages */

/* system packages */

/* enhanced kernel services */

/* end of enhanced kernel services */

/* acceleration: Assembly language or algorithmic acceleration packages */

/* end of acceleration: Assembly language or algorithmic acceleration packages */

/* CMSIS: ARM Cortex-M Microcontroller Software Interface Standard */

/* end of CMSIS: ARM Cortex-M Microcontroller Software Interface Standard */

/* Micrium: Micrium software products porting for RT-Thread */

/* end of Micrium: Micrium software products porting for RT-Thread */
/* end of system packages */

/* peripheral libraries and drivers */

#define PKG_USING_LORA_RADIO_DRIVER
#define LORA_RADIO_DRIVER_USING_LORA_CHIP
#define LORA_RADIO_DRIVER_USING_LORA_RADIO_SINGLE_INSTANCE
#define LORA_RADIO0_DEVICE_NAME "lora-radio0"
#define LORA_RADIO0_SPI_BUS_NAME "spi4"
#define LORA_RADIO_DRIVER_USING_LORA_CHIP_SX126X

/* Select Supported LoRa Module [SX126X] */

#define LORA_RADIO_USE_TCXO
#define LORA_RADIO_GPIO_SETUP
#define LORA_RADIO_SPI_SETUP
#define LORA_RADIO_GPIO_SETUP_BY_PIN_NUMBER
#define LORA_RADIO_NSS_PIN 68
#define LORA_RADIO_RESET_PIN 114
#define LORA_RADIO_DIO1_PIN 16
#define LORA_RADIO_BUSY_PIN 6
#define LORA_RADIO_RFSW1_PIN 17
#define LORA_RADIO_DRIVER_USING_LORA_MODULE_LSD4RF_2R717N40

/* LoRa Chip SX1268 (SPI module) */

/* Select Supported Target Borad */

#define LORA_RADIO_DIO2_PIN 115
#define LORA_RADIO_RFSW2_PIN 18
#define LORA_RADIO_DRIVER_USING_TRAGET_BOARD_ART_PI_AND_LRS007_RF_B
/* end of Select Supported Target Borad */
/* end of Select Supported LoRa Module [SX126X] */
#define LORA_RADIO_DRIVER_USING_LORA_RADIO_DEBUG
#define LR_DBG_SHELL_CONFIG
#define LR_DBG_SHELL 1
#define LR_DBG_INTERFACE_CONFIG
#define LR_DBG_INTERFACE 1
#define LR_DBG_CHIP_CONFIG
#define LR_DBG_CHIP 1
#define LR_DBG_SPI_CONFIG
#define LR_DBG_SPI 1

/* Select LoRa Radio Driver Example */

#define LORA_RADIO_DRIVER_USING_LORA_RADIO_TESTER
#define PHY_REGION_CN470
#define USE_MODEM_LORA
/* end of Select LoRa Radio Driver Example */
#define PKG_USING_LORA_RADIO_DRIVER_V143
#define LORA_GW_DRIVER_LIB_USING_LORA_CHIP_SX1302
#define LORA_GW_DRIVER_SPI_DEVICE_NAME "lgd1302"
#define LORA_GW_DRIVER_SPI_BUS_NAME "spi2"
#define LORA_GW_DRIVER_I2C_DEVICE_NAME "i2c3"
#define LORA_GW_DRIVER_GPIO_SETUP

/* Select Supported Target Borad */

#define LORA_GW_DRIVER_USING_TRAGET_BOARD_ART_PI_AND_LORA_SHIELD_LRS007_LSD4WN_2K730NE0_SX1302
#define LORA_GW_DRIVER_USING_SX1302_LSD4WN_2K730NE0
#define LORA_GW_DRIVER_USING_FE_SX1250
#define LORA_GW_DRIVER_GPIO_SETUP_BY_PIN_NUMBER
#define LORA_GW_DRIVER_SPI_NSS_PIN 128
#define LORA_GW_DRIVER_RESET_PIN 15
#define LORA_GW_DRIVER_POWER_ON_PIN 126
#define LORA_GW_DRIVER_PPS_PIN 127
#define LORA_GW_DRIVER_GPIO6_PIN 119
/* end of Select Supported Target Borad */

/* Select LoRa GW Driver Samples */

#define LORA_GW_DRIVER_LIB_USING_LGD_TESTER
#define LORA_GW_DRIVER_LIB_USING_PHY_REGION_CN470
#define LGD_DBG_SHELL_TEST_CONFIG
#define LGD_DBG_SHELL_TEST 1
#define LGD_DBG_SHELL_RX_INFO_CONFIG
#define LGD_DBG_SHELL_RX_INFO 1
/* end of Select LoRa GW Driver Samples */
#define PKG_USING_LORA_GW_DRIVER_LIB_V030
/* end of peripheral libraries and drivers */

/* AI packages */

/* end of AI packages */

/* miscellaneous packages */

/* project laboratory */

/* end of project laboratory */

/* samples: kernel and components samples */

/* end of samples: kernel and components samples */

/* entertainment: terminal games and other interesting software packages */

/* end of entertainment: terminal games and other interesting software packages */
/* end of miscellaneous packages */
/* end of RT-Thread online packages */

/* Hardware Drivers Config */

#define SOC_STM32H750XB
#define SOC_SERIES_STM32H7

/* Board extended module */

/* end of Board extended module */

/* Onboard Peripheral */

#define BSP_USING_USB_TO_USART
/* end of Onboard Peripheral */

/* On-chip Peripheral */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART4
#define BSP_USING_SPI
#define BSP_USING_SPI1
#define BSP_USING_SPI2
#define BSP_USING_SPI4
#define BSP_USING_I2C
#define BSP_USING_I2C3

/* Notice: PH12 --> 124; PH11 --> 123 */

#define BSP_I2C3_SCL_PIN 123
#define BSP_I2C3_SDA_PIN 124
/* end of On-chip Peripheral */
/* end of Hardware Drivers Config */

/* External Libraries */

/* end of External Libraries */
#define FIRMWARE_EXEC_USING_QSPI_FLASH
#define RT_STUDIO_BUILT_IN

#endif
