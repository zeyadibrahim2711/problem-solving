#include <iostream>
#include<algorithm>
#include <cmath>
#include <string>
#include <set>

using namespace std;

int main()
{
	string Value;
	getline(cin, Value);
	set<char>Letters;
	for (int i = 0; i < Value.size(); i++)
	{
		if (Value[i] != '{' && Value[i] != '}' && Value[i] != ',' && Value[i] != ' ')
		{
			Letters.insert(Value[i]);
		}
	}
	cout << Letters.size();


	
}
