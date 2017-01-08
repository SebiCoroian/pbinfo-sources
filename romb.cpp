#include<iostream>
#include<cmath>

using namespace std;
int main()
{
double d1,d2;
cin>>d1>>d2;
double A=d1*d2/2;
d1/=2;
d2/=2;
double lat=sqrt(d1*d1+d2*d2);
double P=4*lat;
cout<<P<<" "<<A;

}
