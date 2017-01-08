#include <iostream>
using namespace std;
int main(){
int n=1,MIN=1000000, a;
while(n!=0)
{
    cin>>n;
    if(MIN>=n && n>0)
        MIN=n;

}
    if(MIN>0 && MIN!=1000000)
        cout<<MIN;
    else
        cout<<"NU EXISTA";

return 0;
}
