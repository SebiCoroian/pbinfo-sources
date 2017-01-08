#include<iostream>
using namespace std;
int main()
{
int a,b,c,aux1,aux2;
c=0;
aux1=0;
aux2=0;
    while(a!=0 && b!=0)
    {
   cin>>a;
   cin>>b;
        while(a!=0)
        {
        aux1=a%10;
        a=a/10;
        }
        while(b!=0)
        {
        aux2=b%10;
        b=b/10;
        }
        a=aux1;
      b=aux2;
        if(aux1==aux2)
        c++;
        if(a==0 && b==0)
        c--;
        aux1=0;
      aux2=0;
      
    }
   cout<<c;

}
