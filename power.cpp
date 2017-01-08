#include<iostream>
using namespace std;
int main()
{
    int j,nr,exponent,t=0,nrc;
    cin>>nr>>exponent;
    int v[100000];
    v[1]=1;
    nrc=1;

    for(int i=1; i<=exponent; i++)
    { t=0;
        for(j=1; j<=nrc; j++)
        {
            v[j]=v[j]*nr + t;
                t=v[j]/10;
                v[j]=v[j]%10;

        }
        if(t>0)
        {
            nrc++;
            v[nrc]=t;
            t=0;
        }
    }
    for( j=nrc; j>=1; j--)
        cout<<v[j];
}
