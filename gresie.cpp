#include<iostream>
using namespace std;
int main()
{
          int L=0,l=0,a,b,d;
          cin>>a>>b>>d;

          if(a%d==0)
             L=a/d;
          else
              L=a/d+1;

          if(b%d==0)
              l=b/d;
          else
              l=b/d+1;

          cout<<l*L;
}
