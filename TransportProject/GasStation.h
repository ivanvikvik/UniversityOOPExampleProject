#pragma once
#include "Bus.h"
#include "Car.h"
#include "Truck.h"

class GasStation
{
public:
	int calcTotalGas(Car* cars, Bus* buses, Truck* trucks, 
		int csize, int bsize, int tsize) {

		int total = 0;

		for (int i = 0; i < csize; i++)
		{
			total += cars[i].volume;
		}

		for (int i = 0; i < bsize; i++)
		{
			total += buses[i].tank;
		}

		for (int i = 0; i < tsize; i++)
		{
			total += trucks[i].tank;
		}

		return total;
	}
};

