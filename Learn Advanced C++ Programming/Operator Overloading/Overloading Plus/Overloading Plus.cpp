#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex C1(3,4);
	Complex C2(2, 3);

	Complex C3 = C1 + C2;

	cout << C1 << endl;

	cout << C1 + C2 + C3 << endl;

	Complex C4(4, 2);
	Complex C5 = C4 + 7;

	cout << C5 << endl;

	Complex C6(1, 7);

	cout << 3.2 + C6 << endl;

	cout << 7 + C1 + C2 + 8 + 9 + C6 << endl;

	return 0;
}