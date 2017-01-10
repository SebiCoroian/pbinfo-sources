#include<iostream>
using namespace std;
int euclid(int a, int b)
{
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<-1;
    }
    else
    {cout<<euclid(a,b);}
}