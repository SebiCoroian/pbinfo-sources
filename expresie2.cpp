#include<iostream>
using namespace std;
int main()
{
    int n,z=1,S=0;
    cin>>n;
while(z<=n)
{
    S=S+(z*(z+1));
    z++;
}
cout<<"Rezultatul este "<<S;
}
