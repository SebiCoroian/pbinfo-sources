#include <iostream>
#include <cstring>
using namespace std;
string s;

int main()
{
    int i,j,k;
    cin>>s;
    cout<<s;
    for(k=s.length()-1;k>=0;k--)
    {
        cout<<endl;
        for(i=0;i<=k-1;i++)
            cout<<s[i];
    }
    cout<<s;
    for(j=0;j<=s.length()-1;j++)
    {
        cout<<endl;
        for(i=j+1;i<s.length();i++)
                cout<<s[i];
    }
}
