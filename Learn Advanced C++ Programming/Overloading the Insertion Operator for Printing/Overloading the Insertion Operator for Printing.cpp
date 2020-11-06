#include <iostream>
using namespace std;

class Test
{
public:
	Test() : Id(0), Name("")
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
		Id = Other.Id;
		Name = Other.Name;

		return *this;
	}

	Test(const Test& Other)
	{
		*this = Other;
	}

	friend ostream& operator<< (ostream& out, const Test& test)
	{
		out << test.Id << ": " << test.Name;
		return out;
	}

private:
	int Id;
	string Name;
};

int main()
{
	Test Test1(10, "Mike");
	Test Test2(20, "Bob");
	
	cout << Test1 << Test2 << endl;

	return 0;
}