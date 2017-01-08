#include<iostream>
using namespace std;
int main()
{
int r[101][101],i,j,n,m,sum=0,max=0,aux=0;
 cin>>n;
 cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {

        cin>>r[i][j];
        }
for(i=1;i<=n;i++)
{
    max=0;
    sum=0;
    for(j=1;j<=m;j++)
    {
        sum+=r[i][j];
        if(max<r[i][j])
            max=r[i][j];
    }
        cout<<sum-max<<" ";
}

}
