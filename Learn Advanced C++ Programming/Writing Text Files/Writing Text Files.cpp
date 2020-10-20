#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//ofstream OutFile;
	fstream OutFile;

	string OutFileName = "text.txt";
	//string OutFileName = "text2.txt";

	//OutFile.open(OutFileName);
	OutFile.open(OutFileName, ios::out);

	if (OutFile.is_open())
	{
		OutFile << "Hello there" << endl;
		OutFile << 123 << endl;
		OutFile.close();
	}
	else
	{
		cout << "Could not create file: " << OutFileName << endl;
	}

	return 0;
}
