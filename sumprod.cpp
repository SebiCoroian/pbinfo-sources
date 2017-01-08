#include<iostream>
using namespace std;
int main()
{
int a,b,c,R=0;
cin>>a>>b>>c;
if((a*b)+c>R)
      R=(a*b)+c;
if((a*c)+b>R)
      R=(a*c)+b;
if((b*c)+a>R)
      R=(b*c)+a;
cout<<R;
return 0;
}
