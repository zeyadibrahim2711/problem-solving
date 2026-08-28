#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
int wantedrow,wantedcolumn;
int a[5][5];
for ( int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
}
for (int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(a[i][j]==1)
        {
            wantedrow=i;
            wantedcolumn=j;
        }
    }
}
int numofmoves=(abs(wantedrow-2)+abs(wantedcolumn-2));
cout<<numofmoves;
}
