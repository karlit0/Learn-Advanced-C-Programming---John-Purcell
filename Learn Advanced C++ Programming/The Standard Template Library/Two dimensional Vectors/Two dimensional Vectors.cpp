#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> Grid(3, vector<int>(4, 7));

	Grid[1].push_back(8);
	//Grid.push_back(vector<int>(1, 0));

	for (int Row=0; Row < Grid.size(); Row++)
	{
		for (int Col = 0; Col < Grid[Row].size(); Col++)
		{
			cout << Grid[Row][Col] << flush;
		}

		cout << endl;
	}

	return 0;
}
