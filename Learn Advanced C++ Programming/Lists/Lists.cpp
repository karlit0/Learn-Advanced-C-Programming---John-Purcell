#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> Numbers;

    Numbers.push_back(1);
    Numbers.push_back(2);
    Numbers.push_back(3);
    Numbers.push_front(0);

    list<int>::iterator TestIt = Numbers.begin();
    TestIt++;
    Numbers.insert(TestIt, 100);
    cout << "Element: " << *TestIt << endl;

	list<int>::iterator EraseIt = Numbers.begin();
	EraseIt++;
    EraseIt = Numbers.erase(EraseIt);
	cout << "Element: " << *EraseIt << endl;

	for (list<int>::iterator it = Numbers.begin(); it != Numbers.end();)
	{
		if (*it == 2)
		{
			Numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			it = Numbers.erase(it);
		}
		else
		{
			it++;
		}
	}

    /*list<int>::iterator it = Numbers.begin();
	while (it != Numbers.end())
	{
		if (*it == 2)
		{
			Numbers.insert(it, 1234);
		}

		if (*it == 1)
		{
			it = Numbers.erase(it);
		}
		else
		{
			it++;
		}
	}*/

    for (list<int>::iterator it = Numbers.begin(); it != Numbers.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
