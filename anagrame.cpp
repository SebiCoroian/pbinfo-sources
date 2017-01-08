#include <iostream>
#include <cstring>

using namespace std;
int ap1[25],ap2[25];
bool anagram(string s1, string s2)
{
    bool ok=1;
    for(int i=0; i<s1.length(); i++)
        ap1[(int)(s1[i]-'a')]++;
    for(int i=0; i<s2.length(); i++)
        ap2[(int)(s2[i]-'a')]++;
    for(int i=0; i<=25; i++)
    {
        if(ap1[i]!=ap2[i])
        {
            ok=0;
        }
    }
    return ok;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagram(s1,s2);
}
