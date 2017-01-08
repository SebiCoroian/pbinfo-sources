#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    if(n<x)
    {
        if(n%2==0 && x==n+1)
            cout<<"Andrei e mai responsabil";
        else 
            cout<<"minciuna";
    }
    if(n>x)
    {
        if(x%2==0 && n==x+1)
            cout<<"Andrei e mai responsabil"; 
        else 
            cout<<"minciuna";
    }
if(n==x)
            cout<<"minciuna";
}
