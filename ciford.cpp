# include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    if(b<=c && c<=d)
        cout<<b<<" "<<c<<" "<<d;
        else
        {if(b<=d && d<=c)
        cout<<b<<" "<<d<<" "<<c;
        else
        {
        if(c<=b && b<=d)
        cout<<c<<" "<<b<<" "<<d;
        else
        {if(c<=d && d<=b)
        cout<<c<<" "<<d<<" "<<b;
         else
         {if(d<=b && b<=c)
        cout<<d<<" "<<b<<" "<<c;
        else
        {
            if(d<=c && c<=b)
        cout<<d<<" "<<c<<" "<<b;
        }}}}}



    return 0;
}
