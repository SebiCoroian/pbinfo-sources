#include<iostream>
using namespace std;
int main()
{
int v[1000],n,i,pmax=0,pmin=0,S=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    if((v[i]%2)==0)
        {pmax=i;}
}
if(pmax==0)
{cout<<"NU EXISTA";}
else
{
     i=1;

while(pmin==0)
{
    if(v[i]%2==0)
    pmin=i;
    i++;
}
while(pmin<=pmax)
{
    S=S+v[pmin];
    pmin++;
}
cout<<S;
}
return 0;
}
