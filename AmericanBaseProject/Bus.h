#pragma once
#include "Vehicle.h"

class Bus:public Vehicle
{
	int people;
	int max_people;
public:
	Bus() {}
	Bus(int pple, int mP, double p, double t) : Vehicle(p, t), people(pple), max_people(mP) {}
	int getPeopleCount();
	int getMaxPeople();
	void arrive(Bus* bus);
	bool leave();
};

