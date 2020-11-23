#pragma once

#include <iostream>
using namespace std;

template <class T>
class ring
{
public:
	class iterator;

	ring(int size) : m_Pos(0), m_Size(size), m_Values(NULL)
	{
		m_Values = new T[size];
	}

	~ring()
	{
		delete[] m_Values;
	}

	int size()
	{
		return m_Size;
	}

	void add(T Value)
	{
		m_Values[m_Pos++] = Value;

		if (m_Pos == m_Size)
		{
			m_Pos = 0;
		}
	}

	T& get(int Pos)
	{
		return m_Values[Pos];
	}

private:
	int m_Pos;
	int m_Size;
	T* m_Values;
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
