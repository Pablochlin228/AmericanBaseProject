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
	people = 0;
	Base::SetVehiclesOnBase(1);
}

bool Bus::leave()
{
	if (!Vehicle::leave())
	{
		return false;
	}

	int people_on_base = Base::GetPeopleOnBase();
	int available_seats = max_people;
	int people_take;

	if (people_on_base <= available_seats)
	{
		people_take = people_on_base;
	}
	else
	{
		people_take = available_seats;
	}
	
	if (people_take > 0)
	{
		Base::RemovePeopleOnBase(people_take);
		people = people_take;
		cout << "Bus took " << people_take << " people from the base!" << endl;
		return true;
	}
	else
	{
		cout << "Bus cant leave!" << endl;
		return false;
	}
}
