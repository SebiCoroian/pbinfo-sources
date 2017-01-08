#include <iostream>
using namespace std;

int main()
{
int n,x=0,c1,c2,aux=0;
cin>>n>>c1>>c2;
if(n==0)
    aux=c2;
else
{

while(n>0)
{
    if((n%10)==c1)
        x=x+c2;
    else
        x=x+(n%10);
    n=n/10;
    x=x*10;
}
x=x/10;
while(x>0)
{
    aux=aux+(x%10);
    x=x/10;
    aux=aux*10;
}
aux=aux/10;
}
cout<<aux;
    return 0;
}
