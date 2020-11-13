#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test
{
public:
	Test(initializer_list<string> Texts)
	{
		for (auto Value : Texts)
		{
			cout << Value << endl;
		}
	}

	void Print(initializer_list<string> Texts)
	{
		for (auto Value : Texts)
		{
			cout << Value << endl;
		}
	}
};

int main()
{
	vector<int> Numbers {1, 3, 4, 6};
	cout << Numbers[2] << endl;

	Test test{"apple", "orange", "banana"};

	test.Print({"one", "two", "three", "four"});

	return 0;
}