#include "Circle.h"

const double PI = 3.1416;

double Circle::getRadius() {
	return radius;
}

void Circle::setRadius(double radius) {
	if (radius > 0) {
		this->radius = radius;
	}
}

double Circle::perimeter() {
	return 2 * PI * radius;
}

double Circle::square() {
	return PI * radius * radius;
}

string Circle::draw() {
	string msg = "Circle: " + Figure::draw()
		+ "; radius = " + to_string(radius);

	return msg;
}