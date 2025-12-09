#include "Vehicle.h"
#include "Base.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(double p, double t)
{
	petrol_amount = p;
	tank_volume = t;
}

double Vehicle::getTankVolume()
{
	return tank_volume;
}

double Vehicle::getPetrolAmount()
{
	return petrol_amount;
}

void Vehicle::arrive()
{
	Base::SetPeopleOnBase(1);
}

bool Vehicle::leave()
{
	if (Base::GetPeopleOnBase() < 0)
	{
		cout << "No people on base!" << endl;
		return false;
	}

	double petrol_needed = tank_volume - petrol_amount;
	if (petrol_needed <= 0)
	{
		Base::RemovePeopleOnBase(1);
		Base::RemoveVehiclesOnBase(1);
		cout << "Vehicle left from base" << endl;
		return true;
	}

	if (Base::GetPetrolOnBase() >= petrol_needed)
	{
		if (Base::UsePetrol(petrol_needed))
		{
			petrol_amount = tank_volume;
			Base::RemovePeopleOnBase(1);
			Base::RemoveVehiclesOnBase(1);
			cout << "Vehicle left from base" << endl;
			return true;
		}
	}
	else
	{
		cout << "Not enough petrol on base!" << endl;
		return false;
	}
}
