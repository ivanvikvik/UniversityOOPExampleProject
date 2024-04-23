#include "Manager.h"
#include <iostream>

int main() {
	Group groupA;
	
	Student st1{ "Alex", 16, 9 };
	Student st2{ "Alice", 13, 8 };
	Student st3{ "Peter", 16, 10 };	
	Student st4{ "Kirill", 14, 10 };
	Student st5{ "Nikita", 15, 9 };
	Student st6{ "Danila", 13, 6 };
	Student st7{ "Alexandra", 14, 7 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);
	groupA.add(st4);
	groupA.add(st5);
	groupA.add(st6);
	groupA.add(st7);

	cout << "Before removing: " << endl;
	cout << groupA.getInfo() << endl;
	cout << groupA.getSize() << endl;

	
	groupA.remove(0);
	//groupA.remove(st6);
	cout << groupA.getSize() << endl;

	cout << "After removing: " << endl;
	cout << groupA.getInfo() << endl;


	return 0;
}
