#include <iostream>

using namespace std;

template<class T, class K>
class Test
{
public:
	Test(T Obj)
	{
		this->Obj = Obj;
	}

	void Print()
	{
		cout << Obj << endl;
	}

private:
	T Obj;
};

int main()
{
	Test<string, int> Test1("Hello");
	Test1.Print();

	return 0;
}