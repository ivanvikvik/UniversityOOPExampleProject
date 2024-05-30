#include <iostream>
#include "Editor.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
	Circle* circle = new Circle();
	Rectangle* rect = new Rectangle();
	Triangle* triangle = new Triangle(1, 2, 3);

	Editor editor;

	cout << editor.justDoIt(circle) << endl;
	cout << editor.justDoIt(rect) << endl;
	cout << editor.justDoIt(triangle) << endl;

	delete circle;
	delete rect;
	delete triangle;

	return 0;
}