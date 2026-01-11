#include "Truck.h"
#include "Base.h"
#include "Bus.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;


int main()
{
	Base base;
	Vehicle* vehicle = nullptr;

	int choice;
	cout << "=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=" << endl;
	cout << "Welcome to our base control system!" << endl;
	cout << "=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=" << endl;
	cout << endl;
	while (true)
	{
		cout << "Choose the action:" << endl;
		cout << "1)Check base stats" << endl;
		cout << "2)Let in vehicle" << endl;
		cout << "3)Let in bus" << endl;
		cout << "4)Let in truck" << endl;
		cout << "<----------------->" << endl;
		cout << "5)Let out vehicle" << endl;
		cout << "6)Let out bus" << endl;
		cout << "7)Let out truck" << endl;
		cout << "<----------------->" << endl;
		cout << "8)Close the control system" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			base.PrintBaseInfo();
			break;
		case 2:
			vehicle = new Vehicle(30,60);
			vehicle->arrive();
			break;
		case 3:
			vehicle = new Bus(11,24,20,82);
			vehicle->arrive();
			break;
		case 4:
			vehicle = new Truck(17.7,20.4,33,55);
			vehicle->arrive();
			break;
		case 5:
			vehicle = new Vehicle(30, 60);
			vehicle->leave();
			break;
		case 6:
			vehicle = new Bus(11, 24, 20, 82);
			vehicle->leave();
			break;
		case 7:
			vehicle = new Truck(17.7, 20.4, 33, 55);
			vehicle->leave();
			break;
		case 8:
			cout << "Finishing the system......." << endl;
			cout << "=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=" << endl;
			cout << "See you next time!" << endl;
			cout << "=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=" << endl;
			return false;
		default:
			cout << "Incorrect option!Try again!" << endl;
			break;
		}
	}
}