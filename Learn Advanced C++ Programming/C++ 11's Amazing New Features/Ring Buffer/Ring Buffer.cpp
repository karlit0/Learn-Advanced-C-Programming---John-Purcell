#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
	ring<string> TextRing(3);

	TextRing.add("one");
	TextRing.add("two");
	TextRing.add("three");
	TextRing.add("four");
	TextRing.add("five");

	for (int i=0; i < TextRing.size(); i++)
	{
		cout << TextRing.get(i) << endl;
	}
	
	return 0;
}