#include<iostream>
using namespace std;

int main()
{
    int n=1,i,v[1000],s=0;

    while(n!=0)
    {
        cin>>n;
        i=n;
        if(i%2!=0)
        s++;
    }
    cout<<s;
    return 0;
}
