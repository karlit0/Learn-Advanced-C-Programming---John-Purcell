#include <iostream>
#include <exception>

using namespace std;

void GoesWrong()
{
	bool bError1Detected = true;
	bool bError2Detected = false;

	if (bError1Detected)
	{
		throw bad_alloc();
	}

	if (bError2Detected)
	{
		throw exception();
	}
}

int main()
{
	try
	{
		GoesWrong();
	}
	catch (bad_alloc& e)
	{
		cout << "Catching bad_alloc: " << e.what() << endl;
	}
	catch(exception& e)
	{
		cout << "Catching exception: " << e.what() << endl;
	}

	return 0;
}