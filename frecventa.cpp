#include<iostream>
#include<cstring>
using namespace std;
int v['z'+1];
int main()
{
string s;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
    if(islower(s[i]))
        v[s[i]]++;
}
int cnt=0,mx=0;
char c;
for(int i=(int)'a';i<=(int)'z';i++)
{
    if(v[i]>mx)
    {
        mx=v[i];
        c=(char)i;
    }

}
cout<<c;

}
