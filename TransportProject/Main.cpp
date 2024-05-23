#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include "Transport.h"
#include "GasStation.h"
#include "Plane.h"


int main() {
	Car car1{ 45 }, car2{ 50 }, car3{ 55 };
	Bus bus{ 350 };
	Truck truck1{ 550 }, truck2{ 450 };
	Plane plane{ 1500 };

	Transport transports[] = {car1, car2, car3, bus, truck1, truck2, plane};

	GasStation station;

	int total = station.calcTotalGas(transports, 7);

	std::cout << "Total fuel is " << total << ".\n";

	return 0;
}