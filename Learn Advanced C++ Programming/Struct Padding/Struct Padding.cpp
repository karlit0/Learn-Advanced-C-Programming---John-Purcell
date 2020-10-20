#include <iostream>

using namespace std;

#pragma pack(push, 1)

struct Person
{
    char Name[50];
    int Age;
    double Weight;
};

#pragma pack(pop)

int main()
{
    cout << sizeof(Person) << endl;

    return 0;
}
