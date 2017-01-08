#include <iostream>

using namespace std;

int main()
{
    int x,n,c=0,z;
    cin>>n;
    z=n;
    if(n==0)
        cout<<1;
    else
    {while(z!=0)
    {x=z%10;
    z=z/10;
    }
    while (n!=0)
    {
        if (n%10==x)
            c++;
        n=n/10;
    }
    cout<<c;}
    return 0;
}
