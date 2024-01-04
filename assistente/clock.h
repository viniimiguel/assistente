#pragma once
#include "tts.h"
#include "sstream"

class Clock
{
public:
	void temporizerc(int time);
	void temporizerdc(int time);
	void cronometer();
	void cronometerP();
private:
	std::stringstream ss;
	Basictts* tt1 = new Basictts();
	bool control = false;
};