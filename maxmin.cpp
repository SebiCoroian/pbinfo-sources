#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && b<=c)
        cout<<c-a;
        else{
    if(a<=c && c<=b)
        {cout<<b-a;}
        else{
    if(b<=a && a<=c)
        {cout<<c-b;}
        else{
    if(b<=c && c<=a)
        {cout<<a-b;}
        else{
    if(c<=a && a<=b)
        {cout<<b-c;}
    if(c<=b && b<=a)
        {cout<<a-c;}}}}}
    return 0;
}



