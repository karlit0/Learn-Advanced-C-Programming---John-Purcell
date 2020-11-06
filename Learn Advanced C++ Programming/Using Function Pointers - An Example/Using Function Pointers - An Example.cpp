#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Match(string Test)
{
	//return Test == "two";
	return Test.size() == 3;
}

int CountStrings(vector<string> &Texts, bool (*Match)(string Test))
{
	int Tally = 0;
	for (int i=0; i < Texts.size(); i++)
	{
		if (Match(Texts[i]))
		{
			Tally++;
		}
	}

	return Tally;
}

int main()
{
	vector<string> Texts;
	Texts.push_back("one");
	Texts.push_back("two");
	Texts.push_back("three");
	Texts.push_back("two");
	Texts.push_back("four");
	Texts.push_back("two");
	Texts.push_back("three");

	cout << Match("one") << endl;

	cout << count_if(Texts.begin(), Texts.end(), Match) << endl;

	cout << CountStrings(Texts, Match) << endl;

	return 0;
}