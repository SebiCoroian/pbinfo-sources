#include<iostream>
using namespace std;
int main()
{
int n,s,u,nr;
cin>>n;
s=n%1000/100;
u=n%10;
nr=s*10+u;
cout<<nr*nr;
return 0;
}
