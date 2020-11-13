#pragma once

#include <iostream>
using namespace std;

template <class T>
class ring
{
public:
	class iterator;
};

template <class T>
class ring<T>::iterator
{
public:
	void Print()
	{
		cout << "Hello from iterator: " << T() << endl;
	}
};
