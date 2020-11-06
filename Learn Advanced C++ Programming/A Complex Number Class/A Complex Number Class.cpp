#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex C1(2, 3);
	Complex C2(C1);

	Complex C3;
	C3 = C2;

	cout << C2 << ": " << C3 << endl;

	return 0;
}