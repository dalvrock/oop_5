#include "Bus_Traffic.h"

Bus_Traffic::Bus_Traffic()
{
	price_per_10kms = 0;
	min_people = 0;
	people_count = 0;
}

Bus_Traffic::Bus_Traffic(int number, string name, int age, int price, int people, int people_real) : Car_Traffic(number, name, age)
{
	price_per_10kms = price;
	min_people = people;
	people_count = people_real;
}

int Bus_Traffic::Get_price_per_10kms()
{
	return price_per_10kms;
}

int Bus_Traffic::Get_min_people()
{
	return min_people;
}

int Bus_Traffic::Get_people_count()
{
	return people_count;
}

void Bus_Traffic::Set_price_per_10kms(int value)
{
	if (value < 0)
	{
		throw ("Incorrect value of price transportation 1 person per 10 kilometres");
	}
	price_per_10kms = value;
}

void Bus_Traffic::Set_min_people(int value)
{
	if (value < 0)
	{
		throw ("Incorrect count of people");
	}
	min_people = value;
}

void Bus_Traffic::Set_people_count(int value)
{
	people_count = value;
}

int Bus_Traffic::Price_of_traffic()
{
	if (people_count < min_people)
	{
		return 0;
	}
	return price_per_10kms * people_count;
}

Bus_Traffic::~Bus_Traffic()
{
}
