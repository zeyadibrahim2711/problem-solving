#include <iostream>
#include<algorithm>
using namespace std;
int NumOfMagnets()
{
	long long size,NumOfMag = 0, arr[100000];

	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			NumOfMag += 1;
		}
	}
	return NumOfMag;
}
int main()
{
	cout << NumOfMagnets();
}
