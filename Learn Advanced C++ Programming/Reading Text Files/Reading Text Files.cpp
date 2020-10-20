#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string InFileName = "test.txt";

	ifstream InFile;

	InFile.open(InFileName);

	if (InFile.is_open())
	{
		string Line;

		while(InFile)
		{
			getline(InFile, Line);
			cout << Line << endl;
		}

		InFile.close();
	}
	else
	{
		cout << "Cannot open file: " << InFileName << endl;
	}

	return 0;
}
