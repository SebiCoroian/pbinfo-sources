#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    for (i=1; i<n; i++)
        cout<<" ";
    cout<<"*";
    for (i=1; i<n; i++)
        cout<<" ";
    cout<<endl;
    for (i=2; i<n; i++)
    {
        for (int j=1; j<=2*n-1; j++)
            if (i+j==n+1 || j-i==n-1)
                cout<<"*";
            else
                cout<<" ";
        cout<<endl;
    }
    if (n>1)
        for (i=1; i<=n; i++)
            cout<<"* ";
    return 0;
}
