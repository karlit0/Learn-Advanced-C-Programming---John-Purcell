#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void Run() = 0;
	virtual void Speak() = 0;
};

class Dog : public Animal
{
public:
	virtual void Speak() override
	{
		cout << "Woof!" << endl;
	}
};

class Labrador : public Dog
{
public:
	Labrador()
	{
		cout << "new labrador" << endl;
	}

	virtual void Run()
	{
		cout << "Labrador running" << endl;
	}
};

void Test(Animal& A)
{
	A.Run();
}

int main()
{
	Labrador Lab;
	Lab.Run();
	Lab.Speak();

	Animal* Animals[5];
	Animals[0] = &Lab;

	Animals[0]->Speak();

	Test(Lab);

	return 0;
}