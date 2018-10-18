// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#ifndef H_ship
#define H_ship


#include <string>
#include <iostream>



class ship
{
	
public:
	ship(std::string n, int len, int mSpeed) //constructor
	{
		if (len == 0)
		{
			length = 1;
		}
		else
		{
			length = len;
		}

		if (mSpeed == 0)
		{
			max_speed = 1;
		}
		else
		{
			max_speed = mSpeed;
		}
		name = n;
	};
	//default constructor 
	ship() { 
		name = ""; 
		length = 1;
		max_speed = 1;
	}
	//getters
	std::string get_name()const
	{
		return name;
	}
	
	unsigned int getMaxSpeed()const
	{
		return max_speed;
	}

	unsigned int getLength()const
	{
		return length;
	}

	//setters
	void setName(std::string shipName)
	{
		name = shipName;
	}

	void setMaxSpeed(unsigned int shipMSpeed)
	{
		max_speed = shipMSpeed;
	}

	void setLength(unsigned int shipLength)
	{
		length = shipLength;
	}

	void print(); //print method
	

private:
	std::string name;
	unsigned int max_speed;
	unsigned int length;
};

#endif 