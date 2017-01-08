#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    if (a>b) {
        int c=a;
        a=b;
        b=c;
    }
    int x,y,i,contor=0;
    for (i=a;i<=b;i++)
    {
        x=i;
        y=0;
        while (x!=0){
            y=y*10+x%10;
            x=x/10;
        }
        if (y==i) contor++;
    }
    cout<<contor;
    return 0;
}
