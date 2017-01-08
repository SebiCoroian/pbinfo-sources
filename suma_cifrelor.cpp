
#include<iostream>
using namespace std;
int main()
{
int n,S=0,c;
cin>>n;
while(n>0)
{
    S=S+n%10;
    n=n/10;
}
cout<<S;
}


