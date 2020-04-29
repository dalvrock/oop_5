#include <iostream>
#include "Bus_Traffic.h"
#include "Freight_Transportation.h"

#define MAX 3

using namespace std;

void Info(Car_Traffic**);
void Sort(Car_Traffic** a);
void Print(Car_Traffic** a);
void Top_driver(Car_Traffic** a);

int main()
{
	Car_Traffic* a[MAX];
	Info(a);
	Print(a);
	cout << "\nInfo\n";
	Sort(a);
	Print(a);
	cout << "The most profitable driver is: " <<endl;
	Top_driver(a);
}

void Info(Car_Traffic** obj)
{
	int type;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Choose type of traffic:\n"
			<< "1. Freight transportation" << endl
			<< "2. Bus traffic" << endl;
		cin >> type;
		int number, age;
		string name;
		switch (type)
		{
		case 1:
			int mass, price, km;
			cout << "Number of the car: ";
			cin >> number;
			cout << "Name of the driver: ";
			cin >> name;
			cout << "Age of the driver: ";
			cin >> age;
			cout << "Mass of the freight: ";
			cin >> mass;
			cout << "Price of transportation 1 ton per 1 kilometer : ";
			cin >> price;
			cout << "The number of kilometres: ";
			cin >> km;
			obj[i] = new Freight_Transportation(number, name, age, mass, price, km);
			break;
		case 2:
			int price2=0; 
			int min, people;
			cout << "Number of the car: ";
			cin >> number;
			cout << "Name of the driver: ";
			cin >> name;
			cout << "Age of the driver: ";
			cin >> age;
			cout << "Price of the transportation 1 passanger per 10 kilometres: ";
			cin >> price;
			cout << "Minimum number of the people: ";
			cin >> min;
			cout << "Real number of the people: ";
			cin >> people;
			obj[i] = new Bus_Traffic(number, name, age, price2, min, people);
			break;
		
		}
	}
}

void Sort(Car_Traffic** a)
{
	for (int i = 0; i < MAX - 1; i++)
	{
		int k = i;
		for (int j = i + 1; j < MAX; j++)
		{
			if (a[j]->Price_of_traffic() > a[k]->Price_of_traffic())
				k = j;
		}
		swap(a[i], a[k]);
	}
}

void Print(Car_Traffic** a)
{
	for (int i = 0; i < MAX; i++)
	{
		cout << *a[i] << ", Price: " << a[i]->Price_of_traffic() << endl;
	}
}

void Top_driver(Car_Traffic** a)
{
	for (int i = 0; i < MAX; i++)
	{
		cout << a[i]->Get_driver_name() << endl;
	}
}




