#include<iostream>
using namespace std;
int main()
{
    int n,v[10001],i,u1=0,u2=0,s,i1=1,i2=1;
    cin>>n;
    s=n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    while(i1<=n)
    {
        if(v[i1]%2!=0)
            u1=v[i1];
        i1++;
    }
    while(i2<=n)
    {
        if(v[i2]%2!=0 && v[i2]!=u1)
            u2=v[i2];
        i2++;
    }
    if(u1==0 || u2==0)
        cout<<"Numere insuficiente";
    else
        cout<<u2<<" "<<u1;
}
