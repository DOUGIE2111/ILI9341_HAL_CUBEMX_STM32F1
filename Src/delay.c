#include "main.h"

/**
��ʱ�������У���Ҫ����Ƶϵ�� Prescal��Ϊ����Ƶ��MHz-1����72MHz����Ӧ����Ϊ71
������������Ϊ1ns��ͨ��while������ʱ�䣬�ﵽus�Ļ�׼ʱ��
*/
void Delay_us(uint16_t nus)
{

	__HAL_TIM_SET_COUNTER(&htim4, 0);
	
	HAL_TIM_Base_Start(&htim4);
	
	while(__HAL_TIM_GET_COUNTER(&htim4) <= ( nus));
	
	HAL_TIM_Base_Stop(&htim4);
	
	
}


void Delay_ms (uint16_t nms)
{
 while(nms--)
   {
     Delay_us(1000);
   }

}

