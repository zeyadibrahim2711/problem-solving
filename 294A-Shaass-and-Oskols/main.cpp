#include <iostream>
#include<algorithm>
#include <cmath>

using namespace std;
void ShaassAndOskols()
{
	int NumOfWires,NumOfShots,NumOfBird,NumOfWire;
	cin >> NumOfWires;
	int arrWires[100];
	for (int i = 0; i < NumOfWires; i++)
	{
		cin >> arrWires[i];
	}
	
	cin >> NumOfShots;
	for (int i = 0; i < NumOfShots; i++)
	{

		cin >> NumOfWire >> NumOfBird;

		
		arrWires[NumOfWire - 2] += NumOfBird - 1;
		arrWires[NumOfWire] += arrWires[NumOfWire - 1] - NumOfBird;
		arrWires[NumOfWire-1] = 0;
	}

	for (int i = 0; i < NumOfWires; i++)
	{
		cout << arrWires[i] << endl;;
	}
}
int main()
{
	ShaassAndOskols();
}
