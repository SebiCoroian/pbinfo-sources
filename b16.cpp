#include<iostream>
#include<cstring>
using namespace std;
char A[50];
char b16[]="ABCDEF";
int n,b=1;
int main()
{
    cin.get(A,50);
    for(int i=strlen(A)-1;i>=0;i--)
    {
        for(int j=0;j<6;j++)
            if(b16[j]==A[i])
            {
                n+=(j+10)*b;
                goto continua;
            }
        n+=(A[i]-'0')*b;
        continua:
            b*=16;
    }
    cout<<n;
    return 0;
}
