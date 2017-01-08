#include<iostream>
using namespace std;
int cmmdc(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{ int n,i,v[200],c;
   cin>>n;
c=0;
for(i=1;i<=n;i++)
{
cin>>v[i];}
for(i=1;i<=n;i++)
if( cmmdc(v[i],v[n])==1)
c++;
cout<<c;
return 0;
}
