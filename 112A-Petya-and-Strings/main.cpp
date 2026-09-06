#include <iostream>
#include<algorithm>
using namespace std;
int  WhoseBigger()
{
	string st1, st2;
	cin >> st1;
	cin >> st2;
 
	int NumOfS1 = 0, NumOfS2 = 0;
 
	for (int i = 0; i < st1.size(); i++)
	{
		st1[i] = tolower(st1[i]);
		st2[i] = tolower(st2[i]);
	}
	if (st1 > st2)
	{
		return 1;
	}
else if (st1<st2)
{
                              return -1;
}
else
return 0;
}
int main()
{
	cout << WhoseBigger();
	
}
