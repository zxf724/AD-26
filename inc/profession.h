/**
  ******************************************************************************
  * @file    touchpad.h
  * @author  ����
  * @version V1.0
  * @date    2017.12.15
  * @brief   ҵ���߼�����ͷ�ļ�
  ******************************************************************************
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _PROFESSION_H
#define _PROFESSION_H

/* Includes ------------------------------------------------------------------*/
#include "prjlib.h"

/* Exported define -----------------------------------------------------------*/


/* Exported types ------------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
extern StoreLog_t key_log;

/* Exported functions --------------------------------------------------------*/
void Profession_init(void);
void button_polling(void);



#endif


/************************ (C)  *****END OF FILE****/
