#include "Bus.h"
#include "Base.h"
#include <iostream>
using namespace std;

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive(Bus* bus)
{
	Base::SetPeopleOnBase(bus->getPeopleCount() + 1);
}

bool Bus::leave()
{
	//Vehicle::leave();

	int people_neeeded = max_people - people;
	

	return false;
}
