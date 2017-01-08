#include <iostream>
using namespace std;
int prime (int a, int b)
{
    int r;
    r=a%b;
    while(r!=0)
        {
            a=b;
            b=r;
            r=a%b;
        }
    return b;
}
int main()
{
    int n,v[201],c=0,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>v[i];
    for(j=1;j<=n-1;j++)
    for(k=j+1;k<=n;k++)
    {
        if(prime(v[j],v[k])==1)
        {
            c++;
        }
    }
    cout<<c;
}