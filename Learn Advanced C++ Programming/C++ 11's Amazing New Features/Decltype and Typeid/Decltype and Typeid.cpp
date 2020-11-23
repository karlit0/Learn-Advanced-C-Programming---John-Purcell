#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	string Value;

	decltype(Value) Name = "Bob";

	cout << typeid(Value).name() << endl;

	cout << Name << endl;

	return 0;
}