#include <iostream>
#include<algorithm>

using namespace std;
int NumOfShovel()
{
	int K=0, r=0;
	cin >> K;
	cin >> r;
	int NumOfShv = 1;
	
	while (true)
	{
		int Result = K * NumOfShv;
		
		if (Result % 10 == 0|| Result % 10 == r)
		{
			return NumOfShv;
		}
		else
		{
			NumOfShv++;
		}
	}

}
int main()
{
	cout << NumOfShovel();
	
}
