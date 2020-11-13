#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Test
{
public:
	Test(int Id, string Name) : Id(Id), Name(Name)
	{
	}

	void print()
	{
		cout << Id << ": " << Name << endl;
	}

	/*bool operator< (const Test& Other) const
	{
		return Name < Other.Name;
	}*/

	friend bool Comp(const Test& A, const Test& B);

private:
	int Id;
	string Name;
};

bool Comp(const Test& A, const Test& B)
{
	return A.Name < B.Name;
}

int main()
{
	vector<Test> Tests;

	Tests.push_back(Test(5, "Mike"));
	Tests.push_back(Test(3, "Vicky"));
	Tests.push_back(Test(10, "Sue"));
	Tests.push_back(Test(7, "Raj"));
	

	sort(Tests.begin(), Tests.end(), Comp);

	for (int i=0; i < Tests.size(); i++)
	{
		Tests[i].print();
	}

	return 0;
}