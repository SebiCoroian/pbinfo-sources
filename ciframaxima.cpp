#include<iostream>
using namespace std;
int nr,ma;
int main()
{
    cin>>nr;
    ma=nr%10;
    while(nr>0)
    {
     if(ma<nr%10)
        ma=nr%10;
     nr=nr/10;
    }
    cout<<ma;
    return 0;
}
