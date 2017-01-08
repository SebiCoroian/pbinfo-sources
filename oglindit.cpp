#include<iostream>
using namespace std;
int nr,ma;
int main()
{
    int n,o,n1;
cin>>n;
o=0;
n1=n;
do
{
o=o*10+n1%10;
n1=n1/10;
}while(n1);
cout<<o;
}

