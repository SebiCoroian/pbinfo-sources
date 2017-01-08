#include<iostream>
using namespace std;
int main()
{
	int n,c1,c2,c3;
	cin>>n;
	c1=n%10;
	c2=(n/10)%10;
	c3=(n/100)%10;
	if(c1==c2 && c2==c3)
        cout<<"da";
    else
        cout<<"nu";
}
