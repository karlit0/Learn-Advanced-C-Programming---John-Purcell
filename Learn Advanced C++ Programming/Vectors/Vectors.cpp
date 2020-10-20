#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> Strings;

    Strings.push_back("one");
    Strings.push_back("two");
    Strings.push_back("three");

    for (int i=0; i < Strings.size(); i++)
    {
        cout << Strings[i] << endl;
    }

	for (vector<string>::iterator it = Strings.begin(); it != Strings.end(); it++)
    {
        cout << *it << endl;
    }

    vector<string>::iterator it = Strings.begin();
    it += 2;
    
    cout << *it << endl;

    return 0;
}
