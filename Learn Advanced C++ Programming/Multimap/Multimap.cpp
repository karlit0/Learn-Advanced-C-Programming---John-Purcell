#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> Lookup;

    Lookup.insert(make_pair(30, "Mike"));
    Lookup.insert(make_pair(10, "Vicky"));
    Lookup.insert(make_pair(30, "Raj"));
    Lookup.insert(make_pair(20, "Bob"));

    for (multimap<int, string>::iterator It = Lookup.begin(); It != Lookup.end(); It++)
    {
        cout << It->first << ": " << It->second << endl;
    }

    cout << endl;

    for (multimap<int, string>::iterator It = Lookup.find(20); It != Lookup.end(); It++)
    {
        cout << It->first << ": " << It->second << endl;
    }

    cout << endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> Its = Lookup.equal_range(30);
    
	for (multimap<int, string>::iterator It = Its.first; It != Its.second; It++)
	{
		cout << It->first << ": " << It->second << endl;
	}

	cout << endl;
	auto Its2 = Lookup.equal_range(30);

	for (multimap<int, string>::iterator It = Its2.first; It != Its2.second; It++)
	{
		cout << It->first << ": " << It->second << endl;
	}

    return 0;
}
