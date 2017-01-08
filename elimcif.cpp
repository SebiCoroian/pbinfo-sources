#include<iostream>
using namespace std;
int main()
{
int n,s,u,m;
cin>>n;
s=n%1000/100;
u=n%10;
m=s*10+u;
cout<<m;
return 0;
}
