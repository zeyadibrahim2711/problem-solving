#include <iostream>
#include<algorithm>

using namespace std;
int NumOfSteps()
{
	int TotalSteps = 0;
	string S;
	cin >> S;
	int start = 97;
	int Result = 0;
	for (int i = 0; i < S.size(); i++)
	{
		Result = abs(S[i] - start);
		if (Result <= 13)
		{
			TotalSteps += Result;
		}
		else
		{
			TotalSteps += (26 - Result);
		}
		
		start = S[i];
	}
	return TotalSteps;
}
int main()
{
	cout << NumOfSteps();
}
