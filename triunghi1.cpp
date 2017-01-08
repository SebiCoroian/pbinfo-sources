# include<iostream>
using namespace std;
int main()
{
    float a,b,c,cosA,cosB,cosC;
    cin>>a>>b>>c;
    if(!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)) cout<<"nu este triunghi";
    else
    {
        cosA=(b*b+c*c-a*a)/(2*b*c);
        cosB=(a*a+c*c-b*b)/(2*a*c);
        cosC=(a*a+b*b-c*c)/(2*a*b);
        if(cosA==0 || cosB==0 || cosC==0) cout<<"triunghi dreptunghic";
        if(cosA<0 || cosB<0 || cosC<0) cout<<"triunghi obtuzunghic";
        if(cosA>0 && cosB>0 && cosC>0) cout<<"triunghi ascutitunghic";
    }
    return 0;
}
