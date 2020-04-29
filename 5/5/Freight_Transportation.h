#pragma once
#include "Car_Traffic.h"

class Freight_Transportation : public Car_Traffic
{
private:
	int mass = 0;
	int price_ton_per_km = 0;
	int km_count = 0;
public:
	Freight_Transportation();
	Freight_Transportation(int, string, int, int, int, int);

	int Price_of_traffic() override;

	int Get_mass();
	int Get_price_ton_per_km();
	int Get_km_count();

	void Set_mass(int tons_count);
	void Set_price_ton_per_km(int price);
	void Set_km_count(int kms);

	~Freight_Transportation();
};

