#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int n,x,ma=0,ct=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>x;
    if(x%2==0)
    {
        ct++;
        ma+=x;
    }
}
cout<<fixed<<setprecision(2)<<(float)ma/ct;


}
