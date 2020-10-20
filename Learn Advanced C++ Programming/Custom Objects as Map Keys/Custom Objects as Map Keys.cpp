#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
	Person() : Name(""), Age(0)
	{
	}

	Person(const Person& Other)
	{
		Name = Other.Name;
		Age = Other.Age;
	}

	Person(string Name, int Age) : Name(Name), Age(Age)
	{
	}

	void Print() const
	{
		cout << Name << ": " << Age << flush;
	}

	bool operator<(const Person& Other) const
	{
		if (Name == Other.Name)
		{
			return Age < Other.Age;
		}
		else
		{
			return Name < Other.Name;
		}
	}

private:
	string Name;
	int Age;
};

int main()
{
	map<Person, int> People;

	People[Person("Mike", 40)] = 40;
	People[Person("Mike", 444)] = 123;
	People[Person("Sue", 30)] = 30;
	People[Person("Raj", 20)] = 20;

	for (map<Person, int>::iterator It = People.begin(); It != People.end(); It++)
	{
		cout << It->second << ": " << flush;
		It->first.Print();
		cout << endl;
	}

	return 0;
}
