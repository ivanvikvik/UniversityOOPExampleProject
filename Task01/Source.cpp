#include "Manager.h"
#include <iostream>

int main() {
	Group groupA;
	Group groupB;

	Student st1{ "Alex", 16, 9 };
	Student st2{ "Alice", 13, 8 };
	Student st3{ "Peter", 16, 10 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	Student st4{ "Kirill", 14, 10 };
	Student st5{ "Nikita", 15, 9 };
	Student st6{ "Danila", 13, 6 };
	Student st7{ "Alexandra", 14, 7 };

	groupB.add(st4);
	groupB.add(st5);
	groupB.add(st6);
	groupB.add(st7);

	cout << groupA.getInfo() << endl;
	cout << groupB.getInfo() << endl;

	Manager manager;

	cout << "Average mark of A: " << manager.calcAvgMark(groupA) << endl;
	cout << "Average mark of B: " << manager.calcAvgMark(groupB) << endl;

	return 0;
}
