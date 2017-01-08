#include<iostream>
using namespace std;
int main()
{int n,nr=0;
cin>>n;
if(n==0)
    cout<<1;
    else
{while(n!=0)
{nr++;
n=n/10;}
cout<<nr;}

}