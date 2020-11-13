#include <iostream>
using namespace std;

int main()
{
	int One = 1;
	int Two = 2;
	int Three = 3;

	// Capture One and Two by value
	[One, Two](){ cout << One << ", " << Two << endl; }();

	// Capture all local variables by value
	[=](){ cout << One << ", " << Two << endl; }();

	// Default capture all local variables by value, but capture Three by reference
	[=, &Three](){ Three = 7; cout << One << ", " << Two << endl;}();
	cout << Three << endl;

	// Default capture all local variables by reference
	[&](){ Three = 7; Two = 8; cout << One << ", " << Two << endl;}();
	cout << Two << endl;

	// Default capture all local variables by reference, but Two and Three by value
	[&, Two, Three]() { One = 100; cout << One << ", " << Two << endl; }();
	cout << One << endl;

	return 0;
}