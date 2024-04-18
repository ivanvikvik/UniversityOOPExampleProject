#include "Manager.h"
#include <iostream>

int main() {
	Group group;
	Student st{ "Alex", 16, 9 };

	group.add(st);

	cout << group.get(1).convert() << endl;

	return 0;
}
