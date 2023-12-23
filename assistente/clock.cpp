#include <iostream>
#include "clock.h"
#include <thread>
#include <Windows.h>

void Clock::temporizerc(int time)
{
	for (int i=0; i < time; i++)
	{
		std::cout << i << std::endl;
	}
}

void Clock::temporizerdc(int time)
{
	for (int i=time; i != 0; i--)
	{
		std::cout << i << std::endl;
	}
}

void Clock::cronometer()
{
	
	int i = 0;
	std::cout << "o cronometro comecou" << std::endl;
	while(!control)
	{
		std::cout << i << std::endl;
		Sleep(1000);
		i++;

	}
}
void Clock::cronometerP()
{
	control = true;
}


