#pragma once
#include "Array.h"
#include <iostream>
#include <string>

using namespace std;

class Fraction : public Array {
protected:
	int decimals;
	int sign;
public:
	Fraction() : Array() {};
	Fraction(int _size, int _sign, int _decimals) : Array(_size) { sign = 0; decimals = 0; };

	virtual void Add(const Fraction& fraction);
	friend Fraction& operator+ (Fraction&, Fraction&);
	friend Fraction& operator- (Fraction&, Fraction&);
	Fraction& operator= (Fraction&);
	friend bool operator== (Fraction&, Fraction&);
	friend bool operator> (Fraction&, Fraction&);
	friend ostream& operator<< (ostream& out, const Fraction& fraction);

	int getIntSize() { return size - decimals; };

	~Fraction() {};
};
