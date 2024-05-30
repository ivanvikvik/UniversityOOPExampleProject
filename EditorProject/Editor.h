#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Editor
{
public:
	string justDoIt(Figure* figure) {

		string msg = "";

		msg += figure->draw();
		msg += "\nperimeter = " + to_string(figure->perimeter());
		msg += "\nsquare = " + to_string(figure->square());

		cout << typeid(*figure).name() << endl;
		// strcmp(typeid(*figure).name(), "class Rectangle") --> 0

		return msg;
	}
};

