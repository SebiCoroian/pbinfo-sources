#include<iostream>
using namespace std;
int main()
{
int v[1000],n,i,S=0,cont1=0,cont2=0;
float MA;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
    S=S+v[i];
    cont1++;
}
MA=S/cont1;
for(i=1;i<=n;i++)
{
    if(v[i]>MA)
        cont2++;
}
cout<<cont2;
return 0;
}
