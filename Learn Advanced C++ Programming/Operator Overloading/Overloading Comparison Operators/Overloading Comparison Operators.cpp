#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex C1(3, 2);
	Complex C2(3, 3);

	if (C1 == C2)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}

	if (C1 != C2)
	{
		cout << "Not equal" << endl;
	}
	else
	{
		cout << "Equal" << endl;
	}

	return 0;
}