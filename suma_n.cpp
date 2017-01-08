#include<iostream>
using namespace std;

int main()
{
    int n,i,v[1000],s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        s=s+v[i];
    }
    cout<<s;
    return 0;
}
