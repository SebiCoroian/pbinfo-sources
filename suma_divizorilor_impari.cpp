#include<iostream>
using namespace std;
int main()
{
    int n,d,p;
    long long s=0;
    cin>>n;
    for(d=1; d*d<=n; d++)
    {
        if(n%d==0)
            { if(d%2!=0)
                s+=d;
        p=n/d;
        if(p!=d && p%2!=0)
            s+=p;}}

    cout<<s;
}
