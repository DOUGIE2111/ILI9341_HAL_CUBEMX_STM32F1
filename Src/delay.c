#include "main.h"

/**
定时器设置中，需要将分频系数 Prescal设为总线频率MHz-1，如72MHz，则应该设为71
这样整好周期为1ns，通过while来消耗时间，达到us的基准时间
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

