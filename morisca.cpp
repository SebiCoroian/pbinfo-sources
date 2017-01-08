#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<'*';
        for(int j=4*n-2*i;j>n;j--)
            cout<<' ';
        for(int j=1;j<=i;j++)
            cout<<'*';
        cout<<'\n';
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<' ';
        for(int j=1;j<=n;j++)
            cout<<'*';
        cout<<'\n';
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
            cout<<'*';
        for(int j=1;j<n+2*i-1;j++)
            cout<<' ';
        for(int j=1;j<=n-i+1;j++)
            cout<<'*';
        cout<<'\n';
    }
}