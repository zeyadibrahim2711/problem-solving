#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string st;
	cin >> st;
	int NumOfCh=0;
	sort(st.begin(), st.end());
	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] != st[i+1])
		{
			NumOfCh += 1;
		}
	}
	
	 	if ( NumOfCh % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
		cout << "IGNORE HIM!";
}


