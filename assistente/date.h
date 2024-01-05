#pragma once
#include <sstream>
#include "tts.h"
#include <sstream>


class Date
{
public:
	void gethours();
	void getday();
	void getmoth();
	void getyear();
	void alarm(int hours, int minutes);
private:
	std::stringstream ss;
	Basictts* tt1 = new Basictts();
};

