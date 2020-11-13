#include <iostream>
using namespace std;

struct Test
{
	virtual bool operator()(string& Text) = 0;
};

struct MatchTest : public Test
{
	virtual bool operator()(string& Text) override
	{
		return Text == "lion";
	}
};

void Check(string Text, Test& test)
{
	if (test(Text))
	{
		cout << "Text matches!" << endl;
	}
	else
	{
		cout << "No match." << endl;
	}
}

int main()
{
	MatchTest Pred;

	string Value = "lion";

	MatchTest m;

	Check("lion", m);

	return 0;
}