#include<iostream>
using namespace std;
int main()
{ long long  n,min=9,max=0;
 cin>>n;
 min=n%10;
 max=n%10;
 while(n>0)
 {if((n%10)>max)
   max=n%10;
  if((n%10)<min)
    min=n%10;
  n=n/10;
 }
 cout<<min+max;
}
  