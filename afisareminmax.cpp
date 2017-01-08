#include<iostream>
using namespace std;
int main()
{
int v[1000],n,i,pmax=1,pmin=1,max=0,min=9999,aux;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    if(max<=v[i])
    {
        max=v[i];
        pmax=i;
    }
    if(min>=v[i])
    {
        min=v[i];
        pmin=i;
    }
}
if(pmin>pmax)
{
    aux=pmin;
    pmin=pmax;
    pmax=aux;
}
while(pmin<=pmax)
{
    cout<<v[pmin]<<" ";
    pmin++;
}
return 0;
}
