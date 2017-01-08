#include <iostream>
using namespace std;
int main() {
int n,n2,k,x;
cin>>n;
cin>>k;
n2=n;
for(int i=1;i<=k;i++)
{
    cin>>x;
    n+=x;
}
if(n==n2)
    cout<<"DA";
else
    cout<<"NU";

}
