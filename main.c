//请在下方输入你的代码：
#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h" 
#include "Key.h"

uint8_t KeyNum;

int main(void)
{
	

	Key_Init();
	OLED_Init();

	while(1)
	{
		
		KeyNum=Key_GetNum();
		
		if(KeyNum==1)
		{
		OLED_ShowChinese(0,0,"我靠");
		OLED_ShowString(32,0,"NB",OLED_8X16);
		OLED_Update();
		}
		
		if(KeyNum==2)
		{
		OLED_ShowChinese(0,0,"电协");
		OLED_ShowString(32,0,"NB",OLED_8X16);
		OLED_Update();
		}
		if(KeyNum==3)
		{
		OLED_ShowChinese(0,0,"老子最");
		OLED_ShowString(48,0,"NB",OLED_8X16);
		OLED_Update();
		}
		if(KeyNum==4)
		{
		OLED_ShowChinese(0,0,"耶耶耶");

		OLED_Update();
		}
		if(KeyNum==5){
			OLED_Clear();
			
	}
	
}
}
