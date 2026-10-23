#include <iostream>
#include<algorithm>
#include <cmath>

using namespace std;

void Juicer()
{
	int NumOfOranges = 0, MaxSize = 0, SizeForEmpty = 0, Counter = 0, NumOfEmpty = 0;


	cin >> NumOfOranges >> MaxSize >> SizeForEmpty;

int arr[1000000];

	for (int i = 0; i < NumOfOranges; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < NumOfOranges; i++)
	{

		if (arr[i] <= MaxSize) 
		{
			// Only process oranges within size limit
			Counter += arr[i];
			if (Counter > SizeForEmpty) 
			{ 
				// Empty the juicer if overflow
				NumOfEmpty++;
				Counter = 0;
			}
		}

	}

	
	cout << NumOfEmpty;



}
int main()
{
	Juicer();
}
