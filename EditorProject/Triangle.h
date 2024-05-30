#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	double a;
	double b;
	double c;
public:
	Triangle() : Figure(), a(1), b(1), c(1) {}
	Triangle(double a, double b, double c, int x, int y) 
		: Figure(x, y), a(a), b(b), c(c) {}
	Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

	double getA();
	double getB();
	double getC();

	void setA(double a);
	void setB(double b);
	void setC(double c);

	double perimeter() override;
	double square() override;
	string draw() override;
};

