#include <iostream>
#include "Integer.h"
using namespace std;

int main() {

	Integer i1{ 5 };
	Integer i2{ 7 };

	Integer i3 = i1.add(i2);
	Integer i3 = i1 + i2;
	i3 = i1.operator-(i2);
	i3 = i1 * i2;
	i3 = i1 / i2;
	i3 = i1 % i2;
	i3 = i1 ^ i2;

	cout << i1.getValue() << " + " << i2.getValue() 
		<< " = " << i3.getValue() << endl;
	
	return 0;
}