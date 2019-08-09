#ifndef __MAIN_H__
#define __MAIN_H__

#include <reg52.h>
#include <intrins.h>



sbit LED1 = P3^0;
sbit LED2 = P3^1;
	


//函数或者变量声明
extern void Delay_ms(unsigned int n);


#endif