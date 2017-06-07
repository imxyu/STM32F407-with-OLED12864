#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"
#include "sys.h"
#include "oled.h"

//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接5V或3.3v电源
//              D0   接PD6（SCL）
//              D1   接PD7（SDA）
//              RES  接PD4
//              DC   接PD5
//              CS   接PD3               
//              ----------------------------------------------------------------

int main()
{
	delay_init(168);
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	OLED_Init();
	OLED_Display_On();
	OLED_Clear();
	while(1)
	{
		OLED_ShowChar(0,0,'A');
		OLED_ShowString(0,2,"Hello");
		OLED_ShowNum(0,4,999,3,16);
		OLED_ShowCHinese(0,6,0);
		OLED_ShowCHinese(18,6,1);
	}
}


