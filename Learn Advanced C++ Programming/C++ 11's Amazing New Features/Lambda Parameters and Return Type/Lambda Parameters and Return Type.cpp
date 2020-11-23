#include <iostream>
using namespace std;

void TestGreet(void (*Greet)(string))
{
	Greet("Bob");
}

void RunDivide(double (*Divide)(double a, double b))
{
	auto RVal = Divide(9, 3);
	cout << RVal << endl;
}

int main()
{
	auto pGreet = [](string Name){ cout << "Hello " << Name << endl; };

	pGreet("Mike");

	TestGreet(pGreet);

	auto pDivide = [](double a, double b) -> double
	{
		if (b == 0.0)
		{
			return 0;
		}

		return a/b;
	};
	
	cout << pDivide(10.0, 5.0) << endl;
	cout << pDivide(10.0, 0.0) << endl;

	RunDivide(pDivide);

	return 0;
}