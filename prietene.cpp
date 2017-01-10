#include<iostream>
using namespace std;
int sumdiv(int n)
{
    int sum=0,i;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
bool ok(int a, int b)
{
    if(sumdiv(a)==b && sumdiv(b)==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(ok(a,b)==1)
    {
        cout<<"PRIETENE";
    }
    else
    {
        cout<<"NU SUNT PRIETENE";
    }
}