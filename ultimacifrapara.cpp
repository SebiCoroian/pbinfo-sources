#include<iostream>
using namespace std;
int main()
{
    long long n,p=-1;
    cin>>n;
    if(n==0)
        cout<<0;
    else
    {
while(p%2!=0 && n>0)
{
    if(n%2==0)
    p=n%10;
    n=n/10;
}
cout<<p;
}
}
