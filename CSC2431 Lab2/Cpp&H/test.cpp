// David Ang
// 10-10-2018
// CSC2431
// Lab 2

//Created a base ship class that is inherited through the fighter and capital class.
//The fleet class is able to remove and add ships as well.
#include "fighter.h"
#include "capital.h"
#include "fleet.h"

void add_ship_to_fleet(fleet *, ship *);
void remove_ship_from_fleet(fleet *, ship *);

int main()
{
	//create various ships for testing
	ship *default_ship = new ship();

	ship *generic_ship = new ship("Generic Ship", 5, 10);

	fighter *default_fighter = new fighter();

	fighter *xwing = new fighter("X-wing", 13, 50, 4, fighter::red, true);

	capital *default_capital = new capital;

	capital *isd = new capital("Imperial Star Destroyer", 1000, 25, 100, \
		capital::purple, 250);

	//call print for all ships
	default_ship->print();
	std::cout << std::endl;

	generic_ship->print();
	std::cout << std::endl;

	default_fighter->print();
	std::cout << std::endl;

	xwing->print();
	std::cout << std::endl;

	default_capital->print();
	std::cout << std::endl;

	isd->print();
	std::cout << std::endl;

	//create a fleet, add ships to it, call print on fleet each time
	fleet *new_republic_one = new fleet("New Republic #1");

	add_ship_to_fleet(new_republic_one, xwing);
	std::cout << std::endl;

	new_republic_one->print_fleet();

	add_ship_to_fleet(new_republic_one, isd);
	std::cout << std::endl;

	new_republic_one->print_fleet();

	add_ship_to_fleet(new_republic_one, xwing);
	std::cout << std::endl;

	new_republic_one->print_fleet();

	//remove xwing from fleet, then print the contents of the fleet
	remove_ship_from_fleet(new_republic_one, xwing);
	std::cout << std::endl;

	new_republic_one->print_fleet();

	//delete everything allocated on the heap
	delete new_republic_one;
	delete xwing;
	delete isd;
	delete default_ship;
	delete generic_ship;
	delete default_fighter;
	delete default_capital;

	return 0;
}

//This function adds a ship to a fleet, and prints the result
void add_ship_to_fleet(fleet *f, ship *s)
{
	if (f->add_ship(s))
		std::cout << "Added ";
	else
		std::cout << "Could not add ";

	std::cout << s->get_name() << " to " << f->get_name() << std::endl;
}

//This function removes a ship from a fleet, and prints the result
void remove_ship_from_fleet(fleet *f, ship *s)
{
	if (f->remove_ship(s->get_name()))
		std::cout << "Removed ";
	else
		std::cout << "Could not remove ";

	std::cout << s->get_name() << " from " << f->get_name() << std::endl;
}
