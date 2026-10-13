#include <iostream>
#include<algorithm>

using namespace std;
void Probability()
{

	int Y, W,Bigger=0,D=0;
	cin >> Y >> W;
	if (Y > W)
	{
		Bigger = Y;
	}
	else
	{
		Bigger = W;
	}
	
	for (int i = Bigger; i <= 6; i++)
	{
		
		D++;
		
	}
	if (D != 5)
	{
		if (6 % D == 0)
		{

			cout << (D / D) << "/" << (6 / D);

		}
		else
		{
			cout << (D / (D / 2)) << "/" << (6 / (D / 2));
		}
		
	}
	else
	{
		cout <<5<<"/"<<6;
	}
}
int main()
{
	Probability();
}
