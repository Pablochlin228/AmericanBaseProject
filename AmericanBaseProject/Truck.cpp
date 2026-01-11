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
	load = 0;
	Base::SetVehiclesOnBase(1);
}

bool Truck::leave()
{
	if (!Vehicle::leave())
	{
		return false;
	}

	int goods_on_base = Base::GetGoodsOnBase();
	int available_load = max_load;
	int load_take;

	if (goods_on_base <= available_load)
	{
		load_take = goods_on_base;
	}
	else
	{
		load_take = available_load;
	}

	if (load_take > 0)
	{
		Base::RemoveGoodsOnBase(load_take);
		load = load_take;
		cout << "Truck took " << load_take << " good from the base!" << endl;
		return true;
	}
	else
	{
		cout << "Truck cant leave!" << endl;
		return false;
	}
}
