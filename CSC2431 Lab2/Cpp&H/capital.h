// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#ifndef H_capital
#define H_capital

#include "ship.h"



class capital : public ship
{

public:
	enum color { red, green, purple };
	//constructor
	capital(std::string name, unsigned int MSpeed, unsigned int len, unsigned int turboLaser, color turboLaserColor, unsigned int fighterCapacity)
	{
		setName(name);
		setMaxSpeed(MSpeed);
		setLength(len);
		num_turbo_laser = turboLaser;
		turbo_laser_color = turboLaserColor;
		fighter_capacity = fighterCapacity;
	}
	//default constructor
	capital() 
	{
		ship(); //calls default constructor
		num_turbo_laser = 0;
		turbo_laser_color = red;
		fighter_capacity = 0;
		
	}
	//setters
	void setTurboLaser(unsigned int turboLaser)
	{
		num_turbo_laser = turboLaser;
	}
	void setFighterCapacity(unsigned int fighterCap)
	{
		fighter_capacity = fighterCap;
	}
	void setTurboLaserColor(color turboLaserColor)
	{
		turbo_laser_color = turboLaserColor;
	}
	//getters
	unsigned int getTurboLaser()const
	{ 
		return num_turbo_laser;
	}
	unsigned int getFighterCapacity()const
	{
		return fighter_capacity;
	}
	color getTurboLaserColor()const
	{
		return turbo_laser_color;
	}

	void print(); //overloaded print method

private:
	 
	unsigned int num_turbo_laser;
	unsigned int fighter_capacity;
	color turbo_laser_color;

};

#endif 
