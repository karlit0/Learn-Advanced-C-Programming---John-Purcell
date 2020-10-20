#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> Numbers(0);

    cout << "Size: " << Numbers.size() << endl;

    int Capacity = Numbers.capacity();
    cout << "Capacity: " << Capacity << endl;

    for (int i=0; i < 10000; i++)
    {
        if (Numbers.capacity() != Capacity)
        {
            Capacity = Numbers.capacity();
            cout << "Capacity: " << Capacity << endl;
        }

        Numbers.push_back(i);
    }

    Numbers.reserve(100000);
    cout << Numbers[2] << endl;
    cout << "Size: " << Numbers.size() << endl;
    cout << "Capacity: " << Numbers.capacity() << endl;

    return 0;
}
