#include<iostream>
using namespace std;
int main()
{
    int m,n,c1,c2,c3,c=0;
    cin>>n>>m;
if(n%10==m%10 || (n/10)%10==(m/10)%10 || (n/10)%10==m%10 || n%10==(m/10)%10)
    cout<<"da";
    else
        cout<<"nu";
}
