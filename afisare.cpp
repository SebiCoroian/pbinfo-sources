#include <iostream>
using namespace std;
int main()
{
int v[1000];
long int i,j,n,ma=-11110,mi=100000,poz1,poz2;
cin>>n;
for(i=1;i<=n;i++)
cin>>v[i];
for(i=2;i<=n;i+=2)
cout<<v[i]<<" ";
cout<<'\n';    if(n%2==1)
{
for(i=n;i>=1;i-=2)
 cout<<v[i]<<" ";
}
else
{
 for(i=n-1;i>=1;i-=2)
 cout<<v[i]<<" ";
}
return 0;
}
