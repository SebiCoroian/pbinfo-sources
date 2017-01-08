#include <iostream>
using namespace std;

int main()
{
    int n,pc,i,s=0,f;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>f;
        if(f==0)
            pc=0;
        else
        {
        while(f>0)
        {
            pc=f%10;
            f=f/10;
        }}
        s=s+pc;
    }
    cout<<s;
    return 0;
}
