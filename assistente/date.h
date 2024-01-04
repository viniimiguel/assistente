#pragma once
#include <sstream>
#include "tts.h"
#include <string.h>
#include <sstream>
#include <string.h>

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

