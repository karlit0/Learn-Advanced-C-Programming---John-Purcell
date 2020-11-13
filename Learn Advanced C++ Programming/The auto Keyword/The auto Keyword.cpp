#include <iostream>
using namespace std;

template <class T, class S>
auto Test(T Value1, S Value2) -> decltype(Value1 + Value2)
{
	return Value1 + Value2;
}

int Get()
{
	return 999;
}

auto Test2() -> decltype(Get())
{
	return Get();
}

int main()
{
	auto Value = 7;
	auto Text = "Hello";

	cout << Test(5, 6) << endl;

	cout << Test2() << endl;

	return 0;
}