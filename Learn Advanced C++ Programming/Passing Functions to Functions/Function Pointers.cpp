#include <iostream>

using namespace std;

void Test(int Value)
{
	cout << "Hello: " << Value << endl;
}

int main()
{
	Test(7);

	void (*pTest)(int) = Test;

	pTest(8);

	return 0;
}