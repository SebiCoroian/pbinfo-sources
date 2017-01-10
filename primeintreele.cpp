#include<iostream>
using namespace std;
int euclid(int a, int b)
{
    int c;
    while (b)
    {
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
    if(euclid(a,b)==1)
    {
        cout<<"PIE";
    }
    else
    {
        cout<<"NOPIE";
    }
}