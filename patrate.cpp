#include <iostream>
using namespace std;
unsigned long long n1, n2; 
int main()
{
const int m = 666013;
long long n;
cin >> n;
n++;
n1=n*n;
n2=n1-1;
if(n1%4==0)
n1=n1/4;
else
n2=n2/4;
if(n1%3==0)
n1=n1/3;
else
n2=n2/3;
cout<<((n1%m)*(n2%m))%m;
return 0;
} 