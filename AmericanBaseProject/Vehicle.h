#pragma once

class Vehicle
{
protected:
	double petrol_amount;
	double tank_volume;
public:
	Vehicle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	void arrive();
	bool leave();
};

