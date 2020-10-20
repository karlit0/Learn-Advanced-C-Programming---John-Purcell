#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
	Person() : Name(""), Age(0)
	{
	}

    Person(const Person &Other)
    {
        cout << "Copy constructor running" << endl;
        Name = Other.Name;
        Age = Other.Age;
    }

    Person(string Name, int Age) : Name(Name), Age(Age)
    {
    }

    void Print()
    {
        cout << Name << ": " << Age << endl;
    }

private:
    string Name;
    int Age;
};

int main()
{
    map<int, Person> People;

    People[50] = Person("Mike", 40);
    People[32] = Person("Vicky", 30);
    People[1] = Person("Raj", 20);

	People.insert(make_pair(55, Person("Bob", 45)));
	People.insert(make_pair(55, Person("Sue", 24)));

    for (map<int, Person>::iterator It = People.begin(); It != People.end(); It++)
    {
        cout << It->first << ": " << flush;
        It->second.Print();
    }

    return 0;
}
