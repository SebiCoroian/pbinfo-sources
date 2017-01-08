#include<iostream>
using namespace std;
int main ()
{
long i=2,n,j, prim=1;
cin>>n;
while(n>0)
{
    for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
           prim=0;
           break;
        }
    }
    if(prim==1)
        {cout<<i<<" ";
        n--;}
    prim=1;
    i++;
}
return 0;
}

