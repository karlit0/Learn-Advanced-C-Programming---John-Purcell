#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string FileName = "stats.txt";
    ifstream Input;

    Input.open(FileName);

    if (!Input.is_open())
    {
        return 1;
    }

    while (Input)
    {
        string Line;

        getline(Input, Line, ':');

        int population;
        Input >> population;

        //Input.get();
        Input >> ws;

        if (!Input)
        {
            break;
        }

        cout << "'" << Line << "'" << " -- '" << population << "'" << endl;
    }

    Input.close();

    return 0;
}
