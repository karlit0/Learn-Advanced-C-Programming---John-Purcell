#include <iostream>
using namespace std;

void Test(void (*pFunc)())
{
	pFunc();
}

int main()
{
	auto func = [](){ cout << "Hello" << endl; };

	func();

	Test(func);

	Test([]() { cout << "Hello again" << endl; });

	return 0;
}