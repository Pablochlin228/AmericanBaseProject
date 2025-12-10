#pragma once

class Vehicle
{
protected:
	double petrol_amount;
	double tank_volume;
public:
	Vehicle() {}
	Vehicle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	virtual void arrive();
	virtual bool leave();
};

