/*
 * TCNT_Driver.c
 *
 *  Created on: Apr 19, 2018
 *      Author: zsolt.balo
 */

#include "TCNT_Driver.h"
#include "TCNT_Driver_Cfg.h"

void TCNT_Driver_Init(TIM_TypeDef* TIMx)
{
	#if ((TCNT_DRIVER_TIMER_14)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM14EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_13)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM13EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_12)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM12EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_11)==OK)
		RCC->APB2ENR|=RCC_APB2ENR_TIM11EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_10)==OK)
		RCC->APB2ENR|=RCC_APB2ENR_TIM10EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_9)==OK)
		RCC->APB2ENR|=RCC_APB2ENR_TIM9EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_8)==OK)
		RCC->APB2ENR|=RCC_APB2ENR_TIM8EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_7)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM7EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_6)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM6EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_5)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM5EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_4)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM4EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_3)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM3EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_2)==OK)
		RCC->APB1ENR|=RCC_APB1ENR_TIM2EN;
	#endif

	#if ((TCNT_DRIVER_TIMER_1)==OK)
		RCC->APB2ENR|=RCC_APB2ENR_TIM1EN;
	#endif

	TIMx->CR1|= TCNT_DRIVER_DIRECTION;
	TIMx->EGR|= TCNT_DRIVER_UPDATE_GENERATION;
}

void TCNT_Driver_SetPeriod(TIM_TypeDef* TIMx,uint32 PeriodValue)
{
	TIMx->ARR = PeriodValue;
}

void TCNT_Driver_SetPrescale(TIM_TypeDef* TIMx,uint32 PrescaleValue)
{
	TIMx->PSC = PrescaleValue;
}

void TCNT_Driver_Start(TIM_TypeDef* TIMx)
{
	TIMx->CR1|=TCNT_DRIVER_COUNTER_ENABLE;
}

void TCNT_Driver_ClearStatus(TIM_TypeDef* TIMx)
{
	TIMx->SR = ((uint16)(0x00));
}

uint8 TCNT_Driver_GetStatus(TIM_TypeDef* TIMx,uint8 Event)
{
	if(((TIMx->SR) & Event)==TRUE)
	{
		return SUCCES;
	}
	else
	{
		return FAILED;
	}
}
