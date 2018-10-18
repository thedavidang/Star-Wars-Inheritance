// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#include "fighter.h"

void fighter::print()
{
	std::cout << "Ship name: " << get_name() << std::endl;
	std::cout << "Ship length: " << getLength() << std::endl;
	std::cout << "Ship max speed: " << getMaxSpeed() << std::endl;
	std::cout << "Number of lasers: " << getLasers() << std::endl;
	std::cout << "Has hyperdrive?: " << getHyperDrive() << std::endl;
	std::cout << "Laser color: " << getLaserColor() << std::endl;
}