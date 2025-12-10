#pragma once
#include "Vehicle.h"

class Truck:public Vehicle
{
	double load;
	double max_load;
public:
	Truck() {}
	Truck(double l, double mL, double p, double t) : Vehicle(p, t),load(l),max_load(mL) {}
	double getCurrentLoad();
	double getMaxLoad();
	void arrive(Truck* truck);
	bool leave();
};

