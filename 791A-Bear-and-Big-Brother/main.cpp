#include <iostream>
using namespace std;
int NumOfYears()
{
	int a = 0, b = 0, NumOfYear = 0;
	cin >> a >> b;
	while (a <= b)
	{
		a *= 3;
		b *= 2;
		NumOfYear += 1;
	}
	return NumOfYear;
}
int main()
{
	cout << NumOfYears();
	
}
