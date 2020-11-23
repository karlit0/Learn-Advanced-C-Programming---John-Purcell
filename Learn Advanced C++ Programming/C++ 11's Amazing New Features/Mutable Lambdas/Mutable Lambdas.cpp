#include <iostream>
using namespace std;

int main()
{
	int Cats = 5;

	[Cats]() mutable
	{
		Cats = 8;
		cout << Cats << endl;
	}();

	cout << Cats << endl;

	return 0;
}