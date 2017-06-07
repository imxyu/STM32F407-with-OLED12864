#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"
#include "sys.h"
#include "oled.h"

//              ----------------------------------------------------------------
//              GND    ��Դ��
//              VCC  ��5V��3.3v��Դ
//              D0   ��PD6��SCL��
//              D1   ��PD7��SDA��
//              RES  ��PD4
//              DC   ��PD5
//              CS   ��PD3               
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


