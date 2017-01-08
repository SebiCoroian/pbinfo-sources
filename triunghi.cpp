#include<iostream>

using namespace std;

int main()

{

float a,b,c;

cin>>a>>b>>c;

if(a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || c+b<=a)

cout<<"nu";

else

cout<<"da";

}