#include <iostream>
using namespace std;
int main()
{
    int a[101][101],s[101],m,n;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        int sum=0;
        for(int j=1; j<=m; j++)
            sum=sum+a[i][j];
        s[i]=sum;
    }
    for(int i=1; i<n; i++)
    for(int j=i+1; j<=n; j++)
    if(s[i]>s[j])
            {
                int aux=s[i];
                s[i]=s[j];
                s[j]=aux;
                for(int k=1; k<=m; k++)
                {
                    aux=a[i][k];
                    a[i][k]=a[j][k];
                    a[j][k]=aux;
                }
            }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
