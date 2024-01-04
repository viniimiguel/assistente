#include <iostream>
#include "clock.h"
#include <thread>
#include <Windows.h>
#include <string>

//função com problemas arrumar depois
//descrição do problema: o tts nao esta funcionando corretamente com iterações devido ao tempo de espera Sleep provavelmente o Sleep esta mais rapido doque o tts reproduz
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


