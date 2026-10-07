#include <iostream>
#include<algorithm>

using namespace std;
int NumOfGames()
{
	int size = 0;
	cin >> size;

	int arr[size*2];
	int Games = 0;
	for (int i = 0; i < size * 2; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size * 2; i=i+2)
	{
		for (int j = i + 2; j < (size * 2)-1; j=j+2)
		{
			if (arr[i] == arr[j + 1] && arr[i + 1] == arr[j])
			{
				Games += 2;
				continue;
			}
			if (arr[i] == arr[j + 1] || arr[i + 1] == arr[j])
			{
				Games += 1;
			}
			
		}
	}
	return Games;
}
int main()
{
	cout << NumOfGames();
}
