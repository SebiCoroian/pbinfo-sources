#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char s[20],voc[]="aeiou";
cin>>s;
for(int k=0;k<strlen(s);k++)
if(!(strchr(voc,s[k])))
    cout<<s[k];



}
