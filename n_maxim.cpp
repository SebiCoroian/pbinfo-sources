#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,i,MAX;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    MAX=a[1];
    for (i=1; i<=n; i++)
    {
        if (MAX<a[i])
            MAX=a[i];
    }
    cout<<MAX;
    return 0;
}
