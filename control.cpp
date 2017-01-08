#include<iostream>
using namespace std;
int main()
{
 int n,s=0,uc,s2=0,c=0,o=0;
 cin>>n;
 if(n==0)
    cout<<0;
 else
 {
     while(n>0)
    {uc=n%10;
    s=s+uc;
    n=n/10;
     }
     while(o!=1)
     {c=0;
     while(s>0)
     {
         uc=s%10;
         c=c+uc;
         s=s/10;
     }
     s=c;
     if(c/10==0)
        o=1;
 }
 cout<<c;
 }

}
