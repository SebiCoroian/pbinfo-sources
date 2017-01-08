#include <iostream>

using namespace std;
char a[21][21],c,d;
int n;
int main()
{
    cin>>n>>c>>d;
    for(int j=1;j<=n;j++)
        a[1][j]=a[n][j]=c;
    for(int i=2;i<n;i++)
        a[i][1]=a[i][n]=c;
    for(int i=2;i<n;i++)
        for(int j=2;j<n;j++)
            a[i][j]=d;
    for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=n;j++)
                cout<<a[i][j];
           cout<<endl;
        }
}
