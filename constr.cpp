#include<iostream>
using namespace std;
int main()
{
int v[1000],a[1000],n,i,j,S=0,V,c;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    V=v[i];
    while(v[i]>0)
        {c=v[i]%10;
        S=S+c;
        v[i]/=10;}
        a[i]=(V%S);
        S=0;
}

for(i=1;i<=n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}
