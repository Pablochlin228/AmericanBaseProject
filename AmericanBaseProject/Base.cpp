#include "Base.h"
#include <iostream>
using namespace std;

int Base::GetPeopleOnBase()
{
    return people_on_base;
}

int Base::GetVehiclesOnBase()
{
    return vehicles_on_base;
}

double Base::GetPetrolOnBase()
{
    return petrol_on_base;
}

double Base::GetGoodsOnBase()
{
    return goods_on_base;
}

void Base::SetPeopleOnBase(int p)
{
    people_on_base += p;
}

void Base::SetVehiclesOnBase(int t)
{
    vehicles_on_base += t;
}

void Base::SetGoodsOnBase(double g)
{
    goods_on_base += g;
}

void Base::PrintBaseInfo()
{
    cout << "======American Base======" << endl;
    cout << "People ob base: " << people_on_base << endl;
    cout << "Transport ob base: " << vehicles_on_base << endl;
    cout << "Petrol ob base: " << petrol_on_base << endl;
    cout << "Goods ob base: " << goods_on_base << endl;
    cout << "=========================" << endl;
    cout << endl;
}

void Base::RemovePeopleOnBase(int p)
{
    people_on_base -= p;
}

void Base::RemoveVehiclesOnBase(int t)
{
    vehicles_on_base -= t;
}

void Base::RemoveGoodsOnBase(int g)
{
    goods_on_base -= g;
}

bool Base::UsePetrol(double p)
{
    if (petrol_on_base >= p)
    {
        petrol_on_base -= p;
    }
    return false;
}

int Base::people_on_base = 20;
int Base::vehicles_on_base = 5;
double Base::petrol_on_base = 50;
double Base::goods_on_base = 15;
