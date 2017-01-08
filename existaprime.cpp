#include<iostream>
using namespace std;
int main()
{
long long v[1000],n,i,j,cont=0;
bool prim,prim2=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    if(v[i]==1 || v[i]==2)
        prim2=1;
        prim=1;
for(j=2;j*j<=v[i];j++)
{
    if(v[i]%j==0)
    {prim=0;
    break;}
}
if(prim==1)
    prim2=1;
}

if(prim2==1)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
