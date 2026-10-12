#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
	int Counter = 0;
	string s, t;
	cin >> s;
	cin >> t;
	for (int i = 0; i < t.size(); i++)
	{
		if (s[Counter] == t[i])
		{
			Counter++;
		}
		
	}
	cout<< ++Counter;
	
}
