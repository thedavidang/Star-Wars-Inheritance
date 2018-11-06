// David Ang
// 10-10-2018
// CSC2431
// Lab 2

#include "capital.h"

void capital::print()
{
	std::cout << "Ship name: " << get_name() << std::endl;
	std::cout << "Ship length: " << getLength() << std::endl;
	std::cout << "Ship max speed: " << getMaxSpeed() << std::endl;
	std::cout << "Number of turbo lasers: " << num_turbo_laser << std::endl;
	std::cout << "Turbo laser color: " << turbo_laser_color << std::endl;
	std::cout << "Fighter capacity: " << fighter_capacity << std::endl;
}