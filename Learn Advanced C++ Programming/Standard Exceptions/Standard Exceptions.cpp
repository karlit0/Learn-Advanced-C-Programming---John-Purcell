#include <iostream>
using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		int *pMemory = new int[999999999999999999];
		int* pMemory2 = new int[999999999999999999];
		int* pMemory3 = new int[999999999999999999];
		int* pMemory4 = new int[999999999999999999];
		int* pMemory5 = new int[999999999999999999];
		int* pMemory6 = new int[999999999999999999];
		delete[] pMemory;
		delete[] pMemory2;
		delete[] pMemory3;
		delete[] pMemory4;
		delete[] pMemory5;
		delete[] pMemory6;
	}
};

int main()
{
	try
	{
		CanGoWrong Wrong;
	}
	catch (bad_alloc& e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}