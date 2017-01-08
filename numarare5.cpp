#include<iostream>
using namespace std;
int main()
{
int v[1000],a[1000],n,i,j,S=0,cont=0,c;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    while(v[i]>0)
        {c=v[i]%10;
        S=S+c;
        v[i]/=10;}
        a[i]=S;
        S=0;
}
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(a[i]==a[j])
    cont++;
cout<<(cont-n)/2;

return 0;
}
