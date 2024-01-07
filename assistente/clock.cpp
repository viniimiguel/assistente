#include <iostream>
#include "clock.h"
#include <Windows.h>
#include <string>


void Clock::temporizerc(int time)
{
	for (int i=0; i < time; i++)
	{
		Sleep(1000);
		ss << i;
		std::string tprzc = ss.str();
		tt1->send_tts(tprzc);
	}
}

void Clock::temporizerdc(int time)
{
	for (int i=time; i != 0; i--)
	{
		Sleep(1000);
		ss << i;
		std::string tprzdc = ss.str();
		tt1->send_tts(tprzdc);
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


