#include <iostream>
#include <vector>
using namespace std;

int main()
{
	auto Texts = {"one", "two", "three"};

	for (auto Text : Texts)
	{
		cout << Text << endl;
	}

	vector<int> Numbers;
	Numbers.push_back(5);
	Numbers.push_back(7);
	Numbers.push_back(9);
	Numbers.push_back(11);

	for (auto Number : Numbers)
	{
		cout << Number << endl;
	}

	string Hello = "Hello";

	for (auto c : Hello)
	{
		cout << c << endl;
	}

	return 0;
}