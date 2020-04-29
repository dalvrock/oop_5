#include "Car_Traffic.h"

Car_Traffic::Car_Traffic()
{
	car_number = 0;
	driver_name = "";
	driver_age = 0;
}

Car_Traffic::Car_Traffic(int number, string name, int age)
{
	car_number = number;
	driver_name = name;
	driver_age = age;
}

int Car_Traffic::Get_car_number()
{
	return car_number;
}

string Car_Traffic::Get_driver_name()
{
	return driver_name;
}

int Car_Traffic::Get_driver_age()
{
	return driver_age;
}

void Car_Traffic::Set_car_numb(int number)
{
	if (number > 9999 && number < 1000)
	{
		throw ("Incorrect value of car number!");
	}
	car_number = number;
}

void Car_Traffic::Set_driver_name(string name)
{
	driver_name = name;
}

void Car_Traffic::Set_driver_age(int age)
{
	driver_age = age;
}

int Car_Traffic::Price_of_traffic()
{
	return 0;
}

Car_Traffic::~Car_Traffic()
{
}

ostream& operator<<(ostream& out, const Car_Traffic& obj)
{
	out << obj.car_number << ", " << obj.driver_name << ", " << obj.driver_age;
	return out;
}

istream& operator>>(istream& in, Car_Traffic& obj)
{
	cout << "Car number: ";
	in >> obj.car_number;
	cout << "Driver name: ";
	in >> obj.driver_name;
	cout << "Driver age: ";
	in >> obj.driver_age;
	return in;
}