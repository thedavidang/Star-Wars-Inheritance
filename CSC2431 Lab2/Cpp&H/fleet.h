// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#ifndef H_fleet
#define H_fleet

#include <vector>
#include "ship.h"

class fleet
{
public:

	fleet(std::string n) //constructor
	{
		name = n;
		num_ships = 0;
	}
	fleet() //default constructor
	{
		name = "";
		num_ships = 0;

	}
	//setters
	void setName(std::string n)
	{
		name = n;
	}

	//getters
	std::string get_name()const
	{
		return name;
	}
	unsigned int getNumShips()const
	{
		return num_ships;
	}


	bool remove_ship(std::string n) //remove a ship in the vector
	{
		for (int i = 0; i < num_ships; i++)
		{
			if (n == ships[i]->get_name())
			{
				ships.erase(ships.begin() + i);
				num_ships--; //decriment the number of ships by 1
				return true;
			}
			
			
		}
		
		return false;
	}


	bool add_ship(ship* addedShip) //adding a ship to the vector
	{
		ships.push_back(addedShip);
		num_ships++; //increment the number of ships by 1
		return true;
	}
	
	void print_fleet(); //print method

private:
	std::string name;
	unsigned int num_ships;
	std::vector<ship*> ships;

};


#endif
