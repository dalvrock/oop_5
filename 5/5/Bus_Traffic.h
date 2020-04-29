#pragma once
#include "Car_Traffic.h"

class Bus_Traffic : public Car_Traffic
{
private:
	int price_per_10kms;
	int min_people;
	int people_count;
public:
	Bus_Traffic();
	Bus_Traffic(int, string, int, int, int, int);

	int Get_price_per_10kms();
	int Get_min_people();
	int Get_people_count();

	void Set_price_per_10kms(int value);
	void Set_min_people(int value);
	void Set_people_count(int value);

		
	int Price_of_traffic() override;

	~Bus_Traffic();

};

