#include <iostream>
#include<algorithm>
#include <cmath>

using namespace std;
void CarrotCakes()
{
	int n=0, t=0, k=0, d=0,tn=0;
	cin >> n >> t >> k >> d;
	tn = (t + d) / t;
	if (tn*k < n)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
int main()
{
	CarrotCakes();
}
