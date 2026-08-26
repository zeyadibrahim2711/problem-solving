#include<iostream>
#include<string>
using namespace std;
int main()
{
int numofproblems,ok=0,no=0,numofsolutions=0;
cin>>numofproblems;
int a[numofproblems][3];
for (int i=0;i<numofproblems;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
}
for (int i=0;i<numofproblems;i++)
{
    ok=0;
    no=0;
    for(int j=0;j<3;j++)
    { 
      if(a[i][j]==1)
      {
        ok++;
      }  
      else{
        no++;
      }
    }
    if(ok>1)
    {
        numofsolutions++;
    }
}
cout <<numofsolutions<<endl;
}
