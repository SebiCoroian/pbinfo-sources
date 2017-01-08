#include <iostream>
using namespace std;
int main()
{
int v[1000],i,n,ma=-1,mi=1001;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    if(mi>=v[i])
        mi=v[i];
    if(ma<=v[i])
        ma=v[i];
}
cout<<mi<<" "<<ma;
}
