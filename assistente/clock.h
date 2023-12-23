#pragma once

class Clock
{
public:
	void temporizerc(int time);
	void temporizerdc(int time);
	void cronometer();
	void cronometerP();
private:
	bool control = false;
};