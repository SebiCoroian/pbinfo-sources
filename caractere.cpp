#include<iostream>
#include<cstring>
#include<string>

using namespace std;
string s1,s2,o;


int main()
{
    cin>>s1>>s2;
    for(int i=0;i<=s1.length();i++)
    {
       if(s2.find(s1[i])!= string::npos)
       cout<<s1[i];
    }
}
