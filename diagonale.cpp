#include<iostream>
using namespace std;
int main()
{
    int n, M[21][21],i,j,d1=0,d2=0;
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>M[i][j];
    i=1;
    while(i<=n)
    {
        d1+=M[i][i];
        i++;
    }
    
    i=n;
    int x=1;
    while(i>=1)
    {
        d2+=M[x][i];
        i--;
        x++;
    }
    
    int max=d1,min=d2;
    if(min>max)
        swap(min,max);
    cout<<max-min;

}
