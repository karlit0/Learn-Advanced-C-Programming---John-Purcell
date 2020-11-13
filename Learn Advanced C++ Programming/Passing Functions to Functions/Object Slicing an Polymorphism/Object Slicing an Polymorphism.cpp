#include <iostream>
using namespace std;

class Parent
{
public:
	Parent() : One(0)
	{
	}

	Parent(const Parent& Other) : One(0)
	{
		One = Other.One;
		cout << "copy parent" << endl;
	}

	virtual void Print()
	{
		cout << "parent" << endl;
	}

private:
	int One;
};

class Child : public Parent
{
public:
	Child() : Two(0)
	{
	}

	void Print()
	{
		cout << "child" << endl;
	}

private:
	int Two;
};

int main()
{
	Child C1;
	Parent& P1 = C1;
	P1.Print();

	Parent P2 = Child();
	P2.Print();

	return 0;
}