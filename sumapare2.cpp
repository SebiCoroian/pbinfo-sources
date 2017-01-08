#include<iostream>
using namespace std;
int main()
{
    int m,x,y,S=0,i,j;
    cin>>x>>y;
    for(i=1;i<=x;i++)
        for(j=1;j<=y;j++)
        {cin>>m;
        if(m%2==0)
            S+=m;}
        cout<<S;

}
