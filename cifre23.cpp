#include<iostream>
using namespace std;
int main()
{ long long n,c2,c3,cif;
cin>>n;
c2=0; c3=0;
while(n!=0)
{ cif=n%10;
if(cif==2)
   c2++;
if(cif==3)
   c3++;
n=n/10;
}
        if(c2==c3)
cout<<"2 3";

else
{if(c3>c2)
cout<<"3";
else{

if(c2>c3)
cout<<"2";

}}
}
