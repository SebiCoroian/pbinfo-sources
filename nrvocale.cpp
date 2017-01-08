#include<iostream>
#include<cstring>
using namespace std;
int x[123];
int main ()
{
    string s,vocale("aeiouAEIOU");
    int max=0, indmax,i;
    getline(cin,s);
    for (i=0;i<s.length();i++)
    {
        if (vocale.find(s[i])!=string::npos)
        {
            x[toupper(s[i])]++;
        }

    }
    for (i='A';i<='z';i++)
    {
        if (x[i]>max)
        {
            max=x[i];
            indmax=i;
        }
    }
    if (islower((char)indmax))
    {
        cout<<(char)toupper((char)indmax);
    }
    else
        cout<<(char)indmax;
}