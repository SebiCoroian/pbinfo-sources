#include <iostream>
using namespace std;
int main(){
int n=1,MAX=-1000000, a;
while(n!=0)
{
    cin>>n;
    if(MAX<=n)
        MAX=n;

}
    if(MAX!=0)
        cout<<MAX;
    else
        cout<<"NU EXISTA";

return 0;
}
