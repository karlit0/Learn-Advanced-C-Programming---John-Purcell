#pragma once
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

	iterator begin()
	{
		return iterator(0, *this);
	}

	iterator end()
	{
		return iterator(m_Size, *this);
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
	iterator(int Pos, ring &ARing) : m_Pos(Pos), m_Ring(ARing)
	{
	}

	iterator& operator++(int)
	{
		m_Pos++;

		return *this;
	}

	iterator& operator++()
	{
		m_Pos++;

		return *this;
	}

	T& operator*()
	{
		return m_Ring.get(m_Pos);
	}

	bool operator!=(const iterator& Other) const
	{
		return m_Pos != Other.m_Pos;
	}

private:
	int m_Pos;
	ring& m_Ring;
};
