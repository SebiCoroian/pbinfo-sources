#include<iostream>
using namespace std;

int main()
{int v[1001],q=0, n, i, max=0,min=1000, dif;
 cin>>n;

for(i=1;i<=n;i++)
{
cin>>v[i];
if(v[i]>max)
max=v[i];
else
{if(v[i]<min)
min=v[i];}}
dif=max-min;
for(i=1;i<=n;i++)
if(v[i]==dif)
q++;
cout<<q;
}
