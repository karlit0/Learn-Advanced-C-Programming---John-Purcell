#include <iostream>
using namespace std;

class Test
{
public:
	Test(): Id(0), Name("")
	{
	}

	Test(int Id, string Name) : Id(Id), Name(Name)
	{
	}

	void print()
	{
		cout << Id << ": " << Name << endl;
	}

	const Test& operator= (const Test& Other)
	{
		cout << "Assignment running" << endl;
		Id = Other.Id;
		Name = Other.Name;

		return *this;
	}

	Test(const Test& Other)
	{
		cout << "Copy constructor running" << endl;
		*this = Other;
	}

private:
	int Id;
	string Name;
};

int main()
{
	Test Test1(10, "Mike");
	cout << "Print Test1 " << flush;
	Test1.print();

	Test Test2(20, "Bob");
	Test2 = Test1;
	cout << "Print Test2 " << flush;
	Test2.print();

	Test Test3;
	//Test3 = Test2 = Test1;

	// Test3 = Test2;
	Test3.operator=(Test2);
	cout << "Print Test3 "<< flush;
	Test3.print();

	cout << endl;
	// Copy initialization
	Test Test4 = Test1;
	Test4.print();

	return 0;
}