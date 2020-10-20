#include <iostream>
using namespace std;

void MightGoWrong()
{
	bool bError1 = false;
	bool bError2 = true;

	if (bError1)
	{
		throw "Something went wrong.";
	}

	if (bError2)
	{
		throw string("Something else went wrong.");
	}
}

void UsesMightGoWrong()
{
	MightGoWrong();
}

int main()
{
	try
	{
		UsesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (char const* e)
	{
		cout << "Error message: " << e << endl;
	}
	catch (string& e)
	{
		cout << "String Error Message: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}