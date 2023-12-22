#include <iostream>
#include <chrono>
#include <ctime>
#include "date.h"


auto currentTime = std::chrono::system_clock::now();
auto currentTimeInSec = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

std::tm localTime;

void Date::gethours()
{
	
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		std::cout << "a hora atual e: " << localTime.tm_hour << ":" << localTime.tm_min << ":" << localTime.tm_sec << std::endl;
	}
	else
	{
		std::cerr << "erro ao obter tempo local." << std::endl;
	}
}

void Date::getday()
{
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		std::cout << "o dia do mes e: " << localTime.tm_mday << std::endl;
		switch (localTime.tm_wday)
		{
		case 0:
			std::cout << "o dia da semana e (DOMINGO)" << std::endl;
			break;
		case 1:
			std::cout << "o dia da semana e (SEGUNDA)" << std::endl;
			break;
		case 2:
			std::cout << "o dia da semana e (TERÇA)" << std::endl;
			break;
		case 3:
			std::cout << "o dia da semana e (QUARTA)" << std::endl;
			break;
		case 4:
			std::cout << "o dia da semana e (QUINTA)" << std::endl;
			break;
		case 5:
			std::cout << "o dia da semana e (SEXTA)" << std::endl;
			break;
		case 6:
			std::cout << "o dia da semana e (SABADO)" << std::endl;
		default:
			std::cout << "retorno invalido" << std::endl;
		}
		
			
	}
	else
	{
		std::cerr << "erro ao obter dia atual" << std::endl;
	}
	

}

void Date::getmoth()
{
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		std::cout << "estamos no mes: " << localTime.tm_mon + 1 << std::endl;;
	}
	else
	{
		std::cerr << "erro ao obter mes atual" << std::endl;
	}
}
void Date::getyear()
{
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		std::cout << "estamos no ano de: " << localTime.tm_year << std::endl;
	}
	else
	{
		std::cerr << "erro ao obter ano atual." << std::endl;
	}
}


