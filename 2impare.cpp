#include<iostream>
using namespace std;
int main()
{
    int n,i=1,a=1,b=1;
    cin>>n;
    while (i<n)
    {
        if(i%2!=0)
            b=i;
            i++;
    }
i=1;
    while (i<n)
    {
        if(i%2!=0 && i!=b)
            a=i;
            i++;
    }
cout<<a<<" "<<b;
}
