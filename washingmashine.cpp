#include <iostream>
#include "washingmashine.h"

void WashingMashine::turn_on(int Time, int Power)
{
	if(!Appliance::get())
	{
		time = Time;
		power = Power;
		set(true);
	}
}
WashingMashine::WashingMashine()
{
	time = 0;
	power = 0;
}
bool WashingMashine::get()
{
	std::cout << "Time is " << time << ": Power is " << power << std::endl;
	return Appliance::get();
}
