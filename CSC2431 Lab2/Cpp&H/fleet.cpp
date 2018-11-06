// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#include "fleet.h"

void fleet::print_fleet()
{
	for (int i = 0; i < num_ships; i++)
	{
		ships[i]->print();
	}
}