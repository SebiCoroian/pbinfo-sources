#include <iostream>
using namespace std;
int n,m,i,j;
int main()
{
    cin>>n>>m;
    cout<<"{";
    for(i=1; i<=n; i++) for(j=1; j<=m; j++)
        {
            cout<<"("<<i<<","<<j<<")";
            if(i!=n || j!=m)cout<<",";
        }
    cout<<"}";
    return 0;
}
