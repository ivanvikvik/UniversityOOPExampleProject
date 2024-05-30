#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	double a, b;
public:
	Rectangle() : Figure(), a(1), b(1) {}
	Rectangle(double a, double b, int x, int y)
		: Figure(x, y), a(a), b(b) {}

	Rectangle(double a, double b) : a(a), b(b) {}

	double getA();
	double getB();
	void setA(double a);
	void setB(double b);

	double perimeter() override;
	double square() override;
	string draw() override;
};

