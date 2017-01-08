#include<iostream>
#include<cmath>

using namespace std;
int main()
{
double b,B,l;
cin>>B>>b>>l;
double jos;
jos=(B-b)/2;
double cat=sqrt(l*l-jos*jos);
double cat2=B-jos;
double ip=(cat*cat+cat2*cat2);
cout<<sqrt(ip);

}
