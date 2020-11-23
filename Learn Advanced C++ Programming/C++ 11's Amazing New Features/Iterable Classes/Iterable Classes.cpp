#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
	ring<string> TextRing(3);

	TextRing.add("one");
	TextRing.add("two");
	TextRing.add("three");
	
	// C++ 98 style
	for (ring<string>::iterator It = TextRing.begin(); It != TextRing.end(); It++)
	{
		cout << *It << endl;
	}
	
	cout << endl;

	// C++ 11 style
	for (auto Value : TextRing)
	{
		cout << Value << endl;
	}

	return 0;
}