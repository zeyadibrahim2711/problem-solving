#include <iostream>
#include<algorithm>
using namespace std;
int MinimNumber()
{
	int size,N=0;
	cin >> size;
	char arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1])
		{
			N += 1;
		}
	}

	return N;
}
int main()
{
	cout << MinimNumber();
}
