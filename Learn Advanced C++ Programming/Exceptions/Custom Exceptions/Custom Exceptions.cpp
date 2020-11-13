#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Something bad happened!";
	}
};

class Test
{
public:
	void GoesWrong()
	{
		throw MyException();
	}
};

int main()
{
	Test test;

	try
	{
		test.GoesWrong();
	}
	catch (MyException& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}