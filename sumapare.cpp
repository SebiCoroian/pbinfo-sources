#include<iostream>
using namespace std;
int main()
{
    int n,z=0,S=0;
    cin>>n;
while(z<=2*n)
{
    S=S+z;
    z=z+2;
}
cout<<"Suma este "<<S;
}
