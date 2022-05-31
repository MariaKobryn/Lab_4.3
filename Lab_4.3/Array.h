#pragma once
#define MAXSIZE 100

#include <iostream>
#include <string>

using namespace std;

class IArray {
protected:
	int size;
	unsigned char a[MAXSIZE];
public:
	virtual void Add(IArray&) = 0;
	void setSize(int _size) { size = _size; };
	unsigned char& operator [] (int);
	int getSize() { return size; };
};

class Array : public IArray {
public:
	Array(int _size);
	Array();
	~Array() {};

	void Add(IArray& array);
	friend ostream& operator<< (ostream& out, const Array& array);
	
};
