#include<iostream>
using namespace std;
int main()
{
    int x,y,max=0,nr=0;
    cin>>x;
    if(x==0)
    cout<<0<<" "<<1;
    else
    {

    y=x;
    while(y>0)
    {
        if((y%10)>max)
            max=(y%10);
        y=y / 10;
    }
    while(x>0)
    {
        if((x%10)==max)
            nr++;
        x=x/10;
    }
    cout<<max<<" "<<nr;
    }

}
