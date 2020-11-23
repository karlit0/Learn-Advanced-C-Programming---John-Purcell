#include <iostream>
using namespace std;

class Test
{
public:
	void Run()
	{
		int Three{3};
		int Four{4};

		auto pLambda = [&, this]()
		{
			One = 111;
			cout << One << endl;
			cout << Two << endl;
			cout << Three << endl;
			cout << Four << endl;
		};

		pLambda();
	}

private:
	int One{1};
	int Two{2};
};

int main()
{
	Test test;
	test.Run();

	return 0;
}