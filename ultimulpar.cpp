#include <iostream>
using namespace std;
int main()
{
int n,p=1,i,m;
cin>>n;
for(i=1;i<=n;i++)
{cin>>m;
if(m%2==0)
{p=m;}}
if(p!=1)
    cout<<p;
else
cout<<"IMPOSIBIL";

}
