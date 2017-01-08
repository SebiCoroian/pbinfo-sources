#include <iostream>
using namespace std;

int main()
{

    long n,z,prod=1,ok=0,x,ok2;
    cin>>n;
     x=n;
   while(x>0)
   {
       z=x%10;
       if(z==0)
        ok2=0;
       x=x/10;
   }


    while(n>0)
    {


        z=n%10;


{

}

        if(z%2==1)
        {
            prod=prod*z;
            ok=1;
        }

        n=n/10;
    }
if(ok==0)
    cout<<-1;
else
    cout<<prod;
    return 0;
}

