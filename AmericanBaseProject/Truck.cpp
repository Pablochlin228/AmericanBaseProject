#include "Truck.h"
#include "Base.h"
#include <iostream>
using namespace std;

double Truck::getCurrentLoad()
{
	return load;
}

double Truck::getMaxLoad()
{
	return max_load;
}

void Truck::arrive(Truck* truck)
{
	Base::SetPeopleOnBase(1);
	Base::SetGoodsOnBase(truck->getCurrentLoad());
}

bool Truck::leave()
{
	Vehicle::leave();


	return false;
}
