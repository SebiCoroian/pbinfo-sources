#include<iostream>
using namespace std;
int main()
{
    int i,n,p,v[1000],z;
    cin>>n>>p;
    z=n;
    cout<<"1 "<<n<<" ";
   while(n<=p)
   {
       if(n*z<=p)
       cout<<n*z<<" ";
       n=n*z;
   }
    }


