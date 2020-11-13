#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	map<string, vector<int>> Scores;

	Scores["Mike"].push_back(10);
	Scores["Mike"].push_back(20);
	Scores["Vicky"].push_back(15);

	for(map<string, vector<int>>::iterator It = Scores.begin(); It != Scores.end(); It++)
	{
		string Name = It->first;
		vector<int> ScoreList = It->second;

		cout << Name << ": " << flush;

		for (int i=0; i < ScoreList.size(); i++)
		{
			cout << ScoreList[i] << " " << flush;
		}

		cout << endl;
	}

	return 0;
}