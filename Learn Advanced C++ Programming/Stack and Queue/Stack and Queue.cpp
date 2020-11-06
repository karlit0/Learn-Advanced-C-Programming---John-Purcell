#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test
{
public:
	Test(string Name): Name(Name)
	{
	}

	~Test()
	{
		//cout << "Object destroyed" << endl;
	}

	void print()
	{
		cout << Name << endl;
	}

private:
	string Name;
};

int main()
{
	// LIFO
	stack<Test> TestStack;

	TestStack.push(Test("Mike"));
	TestStack.push(Test("John"));
	TestStack.push(Test("Sue"));

	cout << endl;

	/*
	* This is invalid code! Object is destroyed.
	Test& test1 = TestStack.top();
	TestStack.pop();
	test1.print(); // Reference refers to destroyed objects
	*/

	while (TestStack.size() > 0)
	{
		Test& Test1 = TestStack.top();
		Test1.print();
		TestStack.pop();
	}

	cout << endl;

	// FIFO
	queue<Test> TestQueue;

	TestQueue.push(Test("Mike"));
	TestQueue.push(Test("John"));
	TestQueue.push(Test("Sue"));

	cout << endl;

	TestQueue.back().print();

	cout << endl;

	while (TestQueue.size() > 0)
	{
		Test& Test1 = TestQueue.front();
		Test1.print();
		TestQueue.pop();
	}
	

	return 0;
}