#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
if((a%400==0)||(a%4==0 && a%100!=0))
    cout<<"bisect";
else
    cout<<"nebisect";

    }
