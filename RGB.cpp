// 
// que funcione el rgb que se controle a partir de bluetooth
// 

#include "RGB.h"


void RGB::setColor(uint8_t red, uint8_t green, uint8_t blue)
{
	pwmR.setBits(red);
	pwmG.setBits(green);
	pwmB.setBits(blue);
}

void RGB::setColor(uint8_t color)
{
	switch (color)
	{
	case OFF:
		pwmR.setBits(0);
		pwmG.setBits(0);
		pwmB.setBits(0);
		break;
	case RED:
		pwmR.setBits(255);
		pwmG.setBits(0);
		pwmB.setBits(0);
		break;
	case GREEN:
		pwmR.setBits(0);
		pwmG.setBits(255);
		pwmB.setBits(0);
		break;
	case BLUE:
		pwmR.setBits(0);
		pwmG.setBits(0);
		pwmB.setBits(255);
		break;
	}