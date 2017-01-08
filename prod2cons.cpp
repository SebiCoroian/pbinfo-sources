#include<iostream>
using namespace std;

 int main()
{long long n,i,k,ok;
     cin>>n;
     ok=0;
     for(i=1;i<=n;i++)
     {
         k=i+1;
         if(i*k==n)
         {
             
             ok=1;
            break;
        }
         else {
             
        }
      }
     if(ok==0)
    {
         cout<<"NU EXISTA";
     }
     else
    {
         cout<<i<<" "<<k;
    }
    return 0;
 }
