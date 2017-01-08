#include <iostream>
using namespace std;
int main()
{
    int n,z=1;
    cin>>n;
    while(z<=n*2)
    {
        if(z%2==0)
            cout<<z<<" ";
        z++;
    }
}
