#include <iostream>
#include<algorithm>
using namespace std;
int UnratedCrime()
{
	int size, pol = 0, crim = 0;
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == -1)
		{
			if (pol > 0)
			{
				pol--;
			}
			else
			{
				crim++;
			}
		}
		else
		{
			pol += arr[i];
		}
		
	}
	return crim;
}
	int main()
	{
		cout << UnratedCrime();
	}
