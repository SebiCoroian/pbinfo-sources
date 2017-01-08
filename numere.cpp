#include <iostream>
using namespace std;
int main()
{
int n,x,is=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>n;
    if(is==0 && n%2==0)
    {
        cout<<n;
        is++;
    }
}
if(is==0)
    cout<<"IMPOSIBIL";
}

