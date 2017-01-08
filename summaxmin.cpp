#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,i,MIN,MAX;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    MIN=a[1];
    MAX=a[1];
    for (i=1; i<=n; i++)
    {
        if (MIN>a[i])
            MIN=a[i];
        if (MAX<a[i])
            MAX=a[i];
    }
    cout<<MIN+MAX;
    return 0;
}
