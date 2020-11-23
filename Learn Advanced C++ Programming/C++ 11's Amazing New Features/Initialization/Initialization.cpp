#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int Value{5};
	cout << Value << endl;

	string Text{"Hello"};
	cout << Text << endl;

	int Numbers[]{1, 2, 4};
	cout << Numbers[1] << endl;

	int* pInts = new int[3]{1, 2, 3};
	cout << pInts[1] << endl;
	delete[] pInts;

	int Value1{};
	cout << Value1 << endl;

	int* pSomething{}; // equivalent to int* pSomething = nullptr;
	cout << pSomething << endl;

	int Numbers1[5]{};
	cout << Numbers1[1] << endl;

	struct
	{
		int Value;
		string Text;
	} S1{5, "Hi"};
	cout << S1.Text << endl;

	vector<string> Strings{"one", "two", "three"};
	cout << Strings[2] << endl;

	return 0;
}