#include <iostream>

using namespace std;

template<typename T>
void Print(T N)
{
	cout << N << endl;
}

int main()
{
	Print<string>("Hello");
	Print<int>(5);

	Print("Hi there");

	return 0;
}