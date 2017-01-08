#include<iostream>
using namespace std;
int main()
{
	float x,y;
	int n=0;
	cin>>x>>y;
	while(y>0)
    {
        y=y-x;
        n++;
    }
    cout<<n;
}
