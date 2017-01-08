#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,i,MIN;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    MIN=a[1];
    for (i=1; i<=n; i++)
    {
        if (MIN>a[i])
            MIN=a[i];
    }
    cout<<MIN;
    return 0;
}
