#include<iostream>
using namespace std;
int main()
{
	float a,b,x,y;
	cin>>a>>b>>x;
	if(a>b)
    {
        y=a;
        a=b;
        b=y;
    }
    if(x>=a && x<=b)
        cout<<"DA";
        else
        cout<<"NU";

}
