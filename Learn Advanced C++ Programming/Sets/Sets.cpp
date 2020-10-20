#include <iostream>
#include <set>

using namespace std;

class Test
{
public:
    Test(): Id(0), Name("")
    {
    }

    Test(int Id, string Name): Id(Id), Name(Name)
    {
    }

    void Print() const
    {
        cout << Id << ": " << Name << endl;
    }

    bool operator<(const Test& Other) const
    {
        return Name < Other.Name;
    }

private:
    int Id;
    string Name;
};

int main()
{
    set<int> Numbers;

    Numbers.insert(50);
    Numbers.insert(10);
    Numbers.insert(30);
    Numbers.insert(30);
    Numbers.insert(20);

    for (set<int>::iterator It = Numbers.begin(); It != Numbers.end(); It++)
    {
        cout << *It << endl;
    }

    set<int>::iterator ItFind = Numbers.find(30);

    if (ItFind != Numbers.end())
    {
        cout << "Found: " << *ItFind << endl;
    }

    if (Numbers.count(30))
    {
        cout << "Number found." << endl;
    }

    set<Test> Tests;

    Tests.insert(Test(10, "Mike"));
    Tests.insert(Test(30, "Joe"));
    Tests.insert(Test(333, "Joe"));
    Tests.insert(Test(20, "Sue"));

	for (set<Test>::iterator It = Tests.begin(); It != Tests.end(); It++)
	{
        It->Print();
	}

    return 0;
}
