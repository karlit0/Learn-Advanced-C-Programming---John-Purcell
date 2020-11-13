#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex C1(2, 4);

	cout << *C1 + *Complex(4, 3) << endl;

	return 0;
}