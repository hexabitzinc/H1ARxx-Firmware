/*
    BitzOS (BOS) V0.2.0 - Copyright (C) 2017-2019 Hexabitz
    All rights reserved
		
    File Name     : H1AR0.c
    Description   : Header file for module H1AR0.
										USB 2.0 - UART (FT230XQ)
*/
	
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef H1AR0_H
#define H1AR0_H

/* Includes ------------------------------------------------------------------*/
#include "BOS.h"
#include "H1AR0_MemoryMap.h"
#include "H1AR0_uart.h"	
#include "H1AR0_gpio.h"	
#include "H1AR0_dma.h"	
	
	
/* Exported definitions -------------------------------------------------------*/

#define	modulePN		_H1AR2

/* Port-related definitions */
#define	NumOfPorts		6
#define P_PROG 				P1						/* ST factory bootloader UART */

/* Define available ports */
#define _P1 
#define _P2 
#define _P3
#define _P4 
#define _P5 
#define _P6 
#define _PUSB 

/* Define available USARTs */
#define _Usart1 1
#define _Usart2 1
#define _Usart3 1
#define _Usart4 1
#define _Usart5 1
#define _Usart6	1

/* Port-UART mapping */
#define P1uart 			&huart2
#define P2uart 			&huart6	
#define P3uart 			&huart3
#define P4uart 			&huart1
#define P5uart 			&huart5	
#define P6uart 			&huart4	
#define PUSBuart 		P6uart

/* Port Definitions */
#define	USART1_TX_PIN		GPIO_PIN_9
#define	USART1_RX_PIN		GPIO_PIN_10
#define	USART1_TX_PORT	GPIOA
#define	USART1_RX_PORT	GPIOA
#define	USART1_AF				GPIO_AF1_USART1

#define	USART2_TX_PIN		GPIO_PIN_2
#define	USART2_RX_PIN		GPIO_PIN_3
#define	USART2_TX_PORT	GPIOA
#define	USART2_RX_PORT	GPIOA
#define	USART2_AF				GPIO_AF1_USART2

#define	USART3_TX_PIN		GPIO_PIN_10
#define	USART3_RX_PIN		GPIO_PIN_11
#define	USART3_TX_PORT	GPIOB
#define	USART3_RX_PORT	GPIOB
#define	USART3_AF				GPIO_AF4_USART3

#define	USART4_TX_PIN		GPIO_PIN_0
#define	USART4_RX_PIN		GPIO_PIN_1
#define	USART4_TX_PORT	GPIOA
#define	USART4_RX_PORT	GPIOA
#define	USART4_AF				GPIO_AF4_USART4

#define	USART5_TX_PIN		GPIO_PIN_3
#define	USART5_RX_PIN		GPIO_PIN_4
#define	USART5_TX_PORT	GPIOB
#define	USART5_RX_PORT	GPIOB
#define	USART5_AF				GPIO_AF4_USART5

#define	USART6_TX_PIN		GPIO_PIN_4
#define	USART6_RX_PIN		GPIO_PIN_5
#define	USART6_TX_PORT	GPIOA
#define	USART6_RX_PORT	GPIOA
#define	USART6_AF				GPIO_AF5_USART6

/* Module-specific Definitions */
#define PUSB 		P6
#define	USART4_RTS_PIN		GPIO_PIN_15
#define	USART4_CTS_PIN		GPIO_PIN_7
#define	USART4_RTS_PORT		GPIOA
#define	USART4_CTS_PORT		GPIOB


#define NUM_MODULE_PARAMS		1

/* H01R0_Status Type Definition */  
typedef enum 
{
  H1AR0_OK = 0,
	H1AR0_ERR_UnknownMessage = 1,
	H1AR0_ERROR = 255
} Module_Status;

/* Indicator LED */
#define _IND_LED_PORT		GPIOA
#define _IND_LED_PIN		GPIO_PIN_11


/* Export UART variables */
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;
extern UART_HandleTypeDef huart5;
extern UART_HandleTypeDef huart6;

/* Define UART Init prototypes */
extern void MX_USART1_UART_Init(void);
extern void MX_USART2_UART_Init(void);
extern void MX_USART3_UART_Init(void);
extern void MX_USART4_UART_Init(void);
extern void MX_USART5_UART_Init(void);
extern void MX_USART6_UART_Init(void);




	
/* -----------------------------------------------------------------------
	|																APIs	 																 	|
   ----------------------------------------------------------------------- 
*/



/* -----------------------------------------------------------------------
	|															Commands																 	|
   ----------------------------------------------------------------------- 
*/




#endif /* H1AR0_H */

/************************ (C) COPYRIGHT HEXABITZ *****END OF FILE****/
