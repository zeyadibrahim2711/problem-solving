#include <iostream>
#include<algorithm>
using namespace std;
int TotalCalories()
{
	int ArrCaLories[1000];
	string S;
	int TotalCal = 0;


	for (int i = 0; i < 4; i++)
	{
		cin >> ArrCaLories[i];
	}
	cin >> S;

	for (int i = 0; i < 4; i++)
	{
		int Totali = 0;
		for (int j = 0; j < S.size(); j++)
		{
			if ((i+1) == S[j]-48)
			{
				Totali += 1;
			}
		}
		TotalCal += ((ArrCaLories[i]) * Totali);
	}
	return TotalCal;
}

int main()
{
	cout << TotalCalories();
}
