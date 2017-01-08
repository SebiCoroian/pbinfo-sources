
#include<iostream>
using namespace std;
int main()
{
int n,S=0,S1=0,c;
cin>>n;
while(n>0)
{
    c=n%2;
    if(c==0)
        S++;
    if (c==1)
        S1++;
    n=n/2;

}
cout<<S<<" "<<S1;
}


