#include "Triangle.h"

double Triangle::getA() {
	return a;
}
double Triangle::getB() {
	return b;
}

double Triangle::getC() {
	return c;
}

void Triangle::setA(double a) {
	if (a > 0) {
		this->a = a;
	}
}
void Triangle::setB(double b) {
	if (b > 0) {
		this->b = b;
	}
}
void Triangle::setC(double c) {
	if (c > 0) {
		this->c = c;
	}
}

double Triangle::perimeter() {
	return a + b + c;
}

double Triangle::square() {
	double p = (a + b + c) / 2;
	double s = pow(p * (p - a) * (p - b) * (p - c), 0.5);
	return s;
}

string Triangle::draw() {
	string msg = "Triangle: " + Figure::draw()
		+ "; a = " + to_string(a)
		+ ", b = " + to_string(b)
		+ ", c = " + to_string(c);
	return msg;
}
