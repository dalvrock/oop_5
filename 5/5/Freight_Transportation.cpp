#include "Freight_Transportation.h"

Freight_Transportation::Freight_Transportation() : Car_Traffic() {}

Freight_Transportation::Freight_Transportation(int number, string name, int age, int tons_count, int price, int kms) : Car_Traffic(number, name, age)
{
	this->mass = tons_count;
	this->price_ton_per_km = price;
	this->km_count = kms;
}

int Freight_Transportation::Price_of_traffic()
{
	return (mass + km_count) * price_ton_per_km;
}

int Freight_Transportation::Get_mass()
{
	return mass;
}

int Freight_Transportation::Get_price_ton_per_km()
{
	return price_ton_per_km;
}

int Freight_Transportation::Get_km_count()
{
	return km_count;
}

void Freight_Transportation::Set_mass(int mass)
{
	mass = mass;
}

void Freight_Transportation::Set_price_ton_per_km(int price)
{
	price_ton_per_km = price;
}

void Freight_Transportation::Set_km_count(int kms)
{
	km_count = kms;
}

Freight_Transportation::~Freight_Transportation()
{
}