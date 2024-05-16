#include "Integer.h"

int Integer::getValue() {
	return value;
}

void Integer::setValue(int value) {
	this->value = value;
}

Integer Integer::add(Integer integer) {
	Integer temp{value + integer.value};
	return temp;
}

Integer Integer::sub(Integer integer) {
	return Integer(value - integer.value);
}

Integer Integer::mul(Integer integer) {
	return Integer(value * integer.value);
}

Integer Integer::div(Integer integer) {
	return Integer(value / integer.value);
}

Integer Integer::mod(Integer integer) {
	return Integer(value % integer.value);
}

Integer Integer::pow(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= value;
	}
	return Integer(result);

}

Integer Integer::opp() {
	return Integer(-value);
}

//// binary operators overloading
//Integer Integer::operator+(Integer integer) {
//	return add(integer);
//}
//
//Integer Integer::operator-(Integer integer) {
//	return sub(integer);
//}

Integer Integer::operator*(Integer integer) {
	Integer temp{ value * integer.getValue() };
	return temp;
}

Integer Integer::operator/(Integer integer) {
	return div(integer);
}

Integer Integer::operator%(Integer integer) {
	return mod(integer);
}

Integer Integer::operator^(Integer integer) {
	return pow(integer.getValue());
}

//// unary operators overloading
//Integer Integer::operator-() {
//	return opp();
//}