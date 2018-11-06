// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#ifndef H_fighter
#define H_fighter

#include "ship.h"

class fighter : public ship
{
public:
	enum color { red, green, blue };
	// constructor
	fighter(std::string name, unsigned int MSpeed, unsigned int len, int numLasers, color laserColor, bool hasHyperDrive)
	{
		setName(name);
		setMaxSpeed(MSpeed);
		setLength(len);
		num_lasers = numLasers;
		has_hyperdrive = hasHyperDrive;
		laser_color = laserColor; 
	}
	//default constructor
	fighter() {
		ship(); //calls default constructor
		num_lasers = 0;
		has_hyperdrive = false;
		laser_color = red;
	}
	//getters
	unsigned int getLasers()const
	{
		return num_lasers;
	}

	bool getHyperDrive()const
	{
		return has_hyperdrive;
	}

	color getLaserColor()const
	{
		return laser_color;
	}

	//setters
	void setLasers(unsigned int laser)
	{
		num_lasers = laser;
	}

	void setHasHyperDrive(bool hyperDrive)
	{
		has_hyperdrive = hyperDrive;
	}

	void setColor(color laserColor)
	{
		laser_color = laserColor;
	}

	void print(); //overloaded print method
	

private:
	unsigned int num_lasers;
	bool has_hyperdrive;
	color laser_color;


};
#endif 

