#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,MAX;
    cin>>n;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    if(a>=b && a>=c)
     MAX=a;
    if(b>=c && b>=a)
        MAX=b;
    if(c>=b && c>=a)
        MAX=c;
    cout<<MAX;

}
