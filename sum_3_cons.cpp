#include<iostream>
using namespace std;
int main()
{
    long long n,i,OK=0;
    cin>>n;
    if(n/3-1+n/3+n/3+1==n) {cout<<n/3-1<<" "<<n/3<<" "<<n/3+1;
                            OK=1;}
    if(!OK) cout<<"NU EXISTA";
}



