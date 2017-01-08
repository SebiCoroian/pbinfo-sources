#include<iostream>
using namespace std;
int main()
{
	int a,b,x;
	cin>>a>>b;

	if(a>b)
    {x=a-b;
    cout<<"Primul copil este mai mare cu "<<x<<" ani";}
    else
    {if(a<b)
    {
        x=b-a;
    cout<<"Al doilea copil este mai mare cu "<<x<<" ani";
    }
     else
     {if(a=b)
        {cout<<"Copiii au varste egale";}}}
}
