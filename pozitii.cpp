#include<iostream>
#include<cstring>
using namespace std;

int main()
{
string s,voc("aeiouAEIOU"),cons("qwrtypsdfghjklzxcvbnm");
getline(cin,s);
int cnt=0;
for(int i=1;i<s.length()-1;i++)
 if(voc.find(s[i])!=string::npos)
        if((cons.find(s[i-1])!=string::npos)&&(cons.find(s[i+1])!=string::npos))
        {cnt++;}
 cout<<cnt;
}
