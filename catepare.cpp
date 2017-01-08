#include<iostream>
using namespace std;
int main()
{
    int p=0,i=1;
    while(i!=0)
    {
        cin>>i;
        if(i%2==0)
           p++;
    }
   if(p==1)
    {cout<<"NU EXISTA";}
else
    cout<<p-1;

}
