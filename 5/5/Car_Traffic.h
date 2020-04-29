#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car_Traffic
{
private:
	int car_number;
	string driver_name;
	int driver_age;
public:
	Car_Traffic();
	Car_Traffic(int, string, int);
	friend ostream& operator<<(ostream& out, const Car_Traffic&);
	friend istream& operator>>(istream& in, Car_Traffic&);

	int Get_car_number();
	string Get_driver_name();
	int Get_driver_age();

	void Set_car_numb(int numb);
	void Set_driver_name(string name);
	void Set_driver_age(int age);

	virtual int Price_of_traffic();

	~Car_Traffic();
};

