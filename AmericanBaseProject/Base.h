#pragma once

class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	Base() {}
	static int GetPeopleOnBase();
	static int GetVehiclesOnBase();
	static double GetPetrolOnBase();
	static double GetGoodsOnBase();
	static void SetPeopleOnBase(int p);
	static void SetVehiclesOnBase(int t);
	static void SetGoodsOnBase(double g);
	void PrintBaseInfo();
	static void RemovePeopleOnBase(int p);
	static void RemoveVehiclesOnBase(int t);
	static void RemoveGoodsOnBase(int g);
	static bool UsePetrol(double p);
};

