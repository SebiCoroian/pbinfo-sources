#include <iostream>
using namespace std;
int main()
{
long long i=0,j,p,k,o;
cin>>p>>k;
//o=k/4;
//cout<<(k+o)*10+p;
if(k%2==0)
    cout<<(k/2 + k - 2)*10+p;
else
    cout<<(k/2 + k - 1)*10+p;
}

