#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int Values[] = {1, 4, 5};

	cout << Values[0] << endl;

	class C
	{
public:
		string Text;
		int Id;
	};

	C C1 = {"Hello", 7};

	cout << C1.Text << endl;

	struct S
	{
		string Text;
		int Id;
	};

	S S1 = {"Hello", 7};

	cout << S1.Text << endl;

	struct
	{
		string Text;
		int Id;
	} R1 = {"Hello", 7}, R2 = {"Hi", 9};

	cout << R1.Text << endl;
	cout << R2.Text << endl;

	vector<string> Strings;

	Strings.push_back("One");
	Strings.push_back("Two");
	Strings.push_back("Three");

	return 0;
}