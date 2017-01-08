#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n>0)
    {
        if(n%2!=0)
            {x++;}
        n=n/10;
    }
    cout<<x;

}
