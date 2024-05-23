#include <iostream>

class A {
public:
	int value1;
	virtual void test() {
		std::cout << "test A" << std::endl;
	}
};

class B : public A {
public:
	int value2;
	void test() override {
		std::cout << "test B" << std::endl;
	}
};

int main() {
	A* pointer = new B();

	pointer->test();

	return 0;
}