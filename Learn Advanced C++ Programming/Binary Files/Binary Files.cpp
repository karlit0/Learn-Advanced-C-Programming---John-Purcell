#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person
{
	char Name[50];
	int Age;
	double Height;
};

#pragma pack(pop)

int main()
{
	Person Someone = {"Frodo", 220, 0.8};

	string FileName = "test.bin";

	// Write binary file

	ofstream OutputFile;

	OutputFile.open(FileName, ios::binary);

	if (OutputFile.is_open())
	{
		OutputFile.write(reinterpret_cast<char *>(&Someone), sizeof(Person));

		OutputFile.close();
	}
	else
	{
		cout << "Could not create file " + FileName;
	}

	// Read binary file

	Person SomeoneElse = {};

	ifstream InputFile;

	InputFile.open(FileName, ios::binary);

	if (InputFile.is_open())
	{
		InputFile.read(reinterpret_cast<char *>(&SomeoneElse), sizeof(Person));

		InputFile.close();
	}
	else
	{
		cout << "Could not read file " + FileName;
	}

	cout << SomeoneElse.Name << ", " << SomeoneElse.Age << ", " << SomeoneElse.Height << endl;

	return 0;
}
