#pragma once
class Integer
{
private:
	int value;

public:
	Integer() : value(0) {}
	Integer(int value) : value(value) {}

	int getValue();
	void setValue(int value);

	Integer add(Integer integer);
	Integer sub(Integer integer);
	Integer mul(Integer integer);
	Integer div(Integer integer);
	Integer mod(Integer integer);
	Integer pow(int n);
	Integer opp();

	// binary operators overloading
	//Integer operator +(Integer integer);
	//Integer operator -(Integer integer);
	Integer operator *(Integer integer);
	Integer operator /(Integer integer);
	Integer operator %(Integer integer);
	Integer operator ^(Integer integer);

	// unary operators overloading
	//Integer operator -();

};


// binary operators overloading
Integer operator+(Integer int1, Integer int2) {
	return int1.add(int2);
}

Integer operator-(Integer int1, Integer int2) {
	Integer temp{int1.getValue() - int2.getValue()};
	return temp;
}

// unary operators overloading
Integer operator-(Integer integer) {
	integer.setValue(-integer.getValue());
	return integer;
}