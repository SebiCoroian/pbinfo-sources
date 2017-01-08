#include<iostream>
using namespace std;
int main()
{
int v[1000],n,i;
bool impar=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    if(v[i]%2==1)
        impar=1;
}

if(impar==1)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
