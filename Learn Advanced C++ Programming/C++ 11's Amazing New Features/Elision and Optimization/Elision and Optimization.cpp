#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
	Test()
	{
		cout << "constructor" << endl;
	}

	Test(int i)
	{
		cout << "parameterized constructor" << endl;
	}

	Test(const Test& Other)
	{
		cout << "copy constructor" << endl;
	}

	Test& operator=(const Test& Other)
	{
		cout << "assignment" << endl;
		return *this;
	}

	~Test()
	{
		cout << "destructor" << endl;
	}

	friend ostream& operator<<(ostream& out, const Test& test);
};

ostream& operator<<(ostream& out, const Test& test)
{
	out << "Hello from test";
	return out;
}

Test GetTest()
{
	return Test();
}

int main()
{
	Test test1 = GetTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	return 0;
}