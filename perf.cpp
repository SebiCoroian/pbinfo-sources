#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=sqrt(n);

    if(x*x==n)
        cout<<"DA";
    else
        cout<<"NU";

}
