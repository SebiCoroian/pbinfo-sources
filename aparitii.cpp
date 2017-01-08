#include <iostream>

using namespace std;

int main()
{
    int x,n,c=0;
    cin>>n;
    if(n==0)
        cout<<1;
    else
    {x=n%10;
    while (n!=0)
    {
        if (n%10==x) c++;
        n=n/10;
    }
    cout<<c;}
    return 0;
}
