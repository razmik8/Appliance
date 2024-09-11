#include <iostream>
#include "class.h"

void Appliance::turn_off()
{
	is_on = false;
	std::cout << "Machine is off.";
}
Appliance::Appliance()
{
	is_on = false;
}
bool Appliance::get()
{
	std::cout << "Machine is" << (is_on) ? "On" : "Off";
	return is_on;
}
void Appliance::set(bool val)
{
	is_on = val;
}
