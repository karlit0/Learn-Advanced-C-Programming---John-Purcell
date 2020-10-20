#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> Ages;

    Ages["Mike"] = 40;
    Ages["Raj"] = 20;
    Ages["Vicky"] = 30;

    Ages["Mike"] = 70;

    Ages.insert(make_pair("Peter", 100));

    cout << Ages["Raj"] << endl;

    if (Ages.find("Vicky") != Ages.end())
    {
        cout << "Found Vicky" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

	for (map<string, int>::iterator It = Ages.begin(); It != Ages.end(); It++)
	{
		pair<string, int> Age = *It;

        cout << Age.first << ": " << Age.second << endl;
	}

    for (map<string, int>::iterator It = Ages.begin(); It != Ages.end(); It++)
    {
        cout << It->first << ": " << It->second << endl;
    }

    return 0;
}
