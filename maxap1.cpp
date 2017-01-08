#include <iostream>

using namespace std;
int x[100][100],v[1000000];
int main()
{
    int n,m,nrmaxim=0,solutii[100],z=0,maximap=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>x[i][j];
            v[x[i][j]]++;
            if(x[i][j]>nrmaxim) nrmaxim=x[i][j];
        }

    for(int i=1;i<=nrmaxim;i++)
        if(v[i]>maximap) maximap=v[i];
    for(int i=1;i<=nrmaxim;i++)
    {
        if(v[i]==maximap)
        {
            z++;
            solutii[z]=i;
        }
    }
    int max=solutii[1];
    for(int i=1;i<=z;i++)
        if(max<solutii[i])
            max=solutii[i];
        cout<<max;
    return 0;
}
