#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool Check(string& Test)
{
	return Test.size() == 3;
}

class Check
{
public:
	bool operator()(string& Test)
	{
		return Test.size() == 5;
	}
} Check1;

void Run(function<bool(string&)> Check)
{
	string Test = "stars";
	cout << Check(Test) << endl;
}

int main()
{
	int Size = 5;

	vector<string> Vec{"one", "two", "three"};

	auto Lambda = [Size](string test) { return test.size() == Size; };

	cout << count_if(Vec.begin(), Vec.end(), Lambda) << endl;

	cout << count_if(Vec.begin(), Vec.end(), Check) << endl;;

	cout << count_if(Vec.begin(), Vec.end(), Check1) << endl;

	Run(Lambda);
	Run(Check1);
	Run(Check);

	function<int(int, int)> Add = [](int One, int Two){ return One + Two; };
	cout << Add(7, 3) << endl;

	return 0;
}