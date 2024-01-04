#include <iostream>
#include <chrono>
#include <ctime>
#include "date.h"
#include <iomanip>
#include <thread>
#include <Windows.h>
#include <sstream>

auto currentTime = std::chrono::system_clock::now();
auto currentTimeInSec = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

std::tm localTime;

void Date::gethours()
{
	
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		ss << "A hora atual é: " << std::setfill('0') << std::setw(2) << localTime.tm_hour << ":"
			<< std::setfill('0') << std::setw(2) << localTime.tm_min << ":" << std::setfill('0') << std::setw(2) << localTime.tm_sec;

		std::string result = ss.str();

		std::cout << result << std::endl;

		tt1->send_tts(result);

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
		std::cout << "estamos no mes: " << localTime.tm_mday << std::endl;

		if (localTime.tm_mday == 0)
		{
			ss << "Hoje e segunda feira";
			std::string segunda = ss.str();
			tt1->send_tts(segunda);
		}
		else if (localTime.tm_mday == 1)
		{
			ss << "Hoje e terça feira";
			std::string terca = ss.str();
			tt1->send_tts(terca);
		}
		else if (localTime.tm_mday == 3)
		{
			ss << "Hoje e quarta feira";
			std::string quarta = ss.str();
			tt1->send_tts(quarta);
		}
		else if(localTime.tm_mday == 4)
		{
			ss << "Hoje é quinta feira";
			std::string quinta = ss.str();
			tt1->send_tts(quinta);
		}
		else if (localTime.tm_mday == 5)
		{
			ss << "Hoje e sexta feira";
			std::string sexta = ss.str();
			tt1->send_tts(sexta);
		}
		else if (localTime.tm_mday == 6)
		{
			ss << "Hoje e sabado";
			std::string sabado = ss.str();
			tt1->send_tts(sabado);
		}
		else if (localTime.tm_mday == 7)
		{
			ss << "Hoje e domingo";
			std::string domingo = ss.str();
			tt1->send_tts(domingo);
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
		if(localTime.tm_mon + 1 == 1)
		{
			ss << "Estamos em janeiro";
			std::string janeiro = ss.str();
			tt1->send_tts(janeiro);
		}
		else if(localTime.tm_mon + 1 == 2)
		{
			ss << "Estamos em fevereiro";
			std::string fevereiro = ss.str();
			tt1->send_tts(fevereiro);
		}
		else if(localTime.tm_mon + 1== 3)
		{
			ss << "Estamos em março";
			std::string marco = ss.str();
			tt1->send_tts(marco);
		}
		else if(localTime.tm_mon + 1 == 4)
		{
			ss << "Estamos em abril";
			std::string abril = ss.str();
			tt1->send_tts(abril);
		}
		else if(localTime.tm_mon + 1 == 5)
		{
			ss << "Estamos em junho";
			std::string junho = ss.str();
			tt1->send_tts(junho);
		}
		else if(localTime.tm_mon + 1 == 6)
		{
			ss << "Estamos em junho";
			std::string junho = ss.str();
			tt1->send_tts(junho);
		}
		else if(localTime.tm_mon + 1 == 7)
		{
			ss << "Estamos em julho";
			std::string julho = ss.str();
			tt1->send_tts(julho);
		}
		else if(localTime.tm_mon + 1 == 8)
		{
			ss << "Estamos em agosto";
			std::string agosto = ss.str();
			tt1->send_tts(agosto);
		}
		else if(localTime.tm_mon + 1 == 9)
		{
			ss << "Estamos em Setembro";
			std::string setembro = ss.str();
			tt1->send_tts(setembro);
		}
		else if(localTime.tm_mon + 1 == 10)
		{
			ss << "Estamos em outubro";
			std::string outubro = ss.str();
			tt1->send_tts(outubro);
		}
		else if(localTime.tm_mon == 11)
		{
			ss << "Estamos em novembro";
			std::string novembro = ss.str();
			tt1->send_tts(novembro);
		}
		else if(localTime.tm_mon + 1 == 12)
		{
			ss << "Estamos em dezembro";
			std::string dezembro = ss.str();
			tt1->send_tts(dezembro);
		}
		
	}
	else
	{
		std::cerr << "erro ao obter mes atual" << std::endl;
	}
}

// esta função esta retornando um valor incorreto depois e bom dar uma olhada
void Date::getyear()
{
	if (localtime_s(&localTime, &currentTimeInSec) == 0)
	{
		ss << "estamos no ano de: " << localTime.tm_year;
		std::string ano = ss.str();
		tt1->send_tts(ano);
	}
	else
	{
		std::cerr << "erro ao obter ano atual." << std::endl;
	}
}
void Date::alarm(int hours, int minutes)
{
	std::chrono::system_clock::time_point alarmTime = currentTime + std::chrono::hours(hours) + std::chrono::minutes(minutes);
	while (std::chrono::system_clock::now() < alarmTime)
	{
		Sleep(100);
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	ss << "alarme acionado";
	std::string alarm = ss.str();
	tt1->send_tts(alarm);
}