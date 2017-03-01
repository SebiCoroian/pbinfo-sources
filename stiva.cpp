#include <stack>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    stack <int> st;
    int n,c;
    string s;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="push")
        {
            cin>>c;
            st.push(c);
        }
        if(s=="pop")
            st.pop();
        if(s=="top")
            cout<<st.top()<<endl;
    }
}
