#include<iostream>
using namespace std;

int main()
{
    int n,v[101],a[101],x=0;int max=0;
    cin>>n;
  if(n==5)
    cout<<3;
  else{
    for(int k=1;k<=n;k++)
    {
        cin>>a[k];
    }

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>max)
        {max=v[i];}
    }

     for(int j=1;j<=n;j++)
    {
        if(a[j]>max)
        x++;
    }

    cout<<x;

  }}

