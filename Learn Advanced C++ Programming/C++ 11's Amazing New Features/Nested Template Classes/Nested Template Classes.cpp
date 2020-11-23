#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
	ring<int>::iterator it;

	it.Print();

	/*ring<string> TextRing(3);

	TextRing.add("one");
	TextRing.add("two");
	TextRing.add("three");
	TextRing.add("four");

	for (int i=0; i < TextRing.size(); i++)
	{
		cout << TextRing.get(i) << endl;
	}*/

	/*
	* Output should be
	* four
	* one
	* two
	*/

	return 0;
}