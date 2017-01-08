#include <iostream>
using namespace std;

int main()
{
    int n,nrt=1;
    cin>>n;
    while(n!=1)
    {
        nrt++;
        if(n%2==0) n/=2;
        else n=3*n+1;
    }
    cout<<nrt;
    return 0;
}
