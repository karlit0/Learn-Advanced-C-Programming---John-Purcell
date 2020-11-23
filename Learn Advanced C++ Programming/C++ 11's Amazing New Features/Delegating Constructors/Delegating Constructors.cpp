#include <iostream>
using namespace std;

class Parent
{
public:
	Parent() : Parent("hello")
	{
		cout << "No parameter parent constructor" << endl;
	}

	Parent(string Text)
	{
		this->Text = Text;
		cout << "string parent constructor" << endl;
	}

private:
	int Dogs{5};
	string Text{"hello"};
};

class Child: public Parent
{
public:
	Child() = default;
};

int main()
{
	Parent parent("Hello");
	Child child;

	return 0;
}