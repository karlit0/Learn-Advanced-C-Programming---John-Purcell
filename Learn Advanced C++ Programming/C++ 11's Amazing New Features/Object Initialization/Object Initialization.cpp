#include <iostream>
using namespace std;

class Test
{
	int Id{3};
	string Name{"Mike"};

public:
	Test() = default;
	Test(const Test& Other) = delete;
	Test& operator=(const Test& Other) = delete;

	Test(int Id) : Id(Id)
	{
	}

	void Print()
	{
		cout << Id << ": " << Name << endl;
	}
};

int main()
{
	Test test;
	test.Print();

	Test test1(77);
	test1.Print();

	
	// Won't work -- we deleted them!
	/*Test test2 = test1;
	test2 = test;*/

	return 0;
}