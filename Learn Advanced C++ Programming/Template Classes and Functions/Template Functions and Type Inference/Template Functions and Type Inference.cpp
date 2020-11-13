#include <iostream>

using namespace std;

template<class T>
void Print(T N)
{
	cout << "Template version: " << N << endl;
}

void Print(int Value)
{
	cout << "Non-template version: " << Value << endl;
}

template<class T>
void Show()
{
	cout << T() << endl;
}

int main()
{
	Print<string>("Hello");
	Print<int>(5);

	Print("Hi there");

	Print(5);
	Print<>(6);

	Show<double>();

	return 0;
}