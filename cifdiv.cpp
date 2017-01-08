#include<iostream>
using namespace std;
int main()
{
    int m,n,c1,c2,c3,c=0;
    cin>>n>>m;
    c1=n%10;
    c2=(n/10)%10;
    c3=(n/100)%10;
    if(c1!=0)
    {
    if(m%c1==0)
       {

       c++;}}
       if(c2!=0)
       {
    if(m%c2==0)
        {c++;}}
        if(c3!=0)
    {if(m%c3==0)
        {c++;}}
    cout<<c;
}
