#include<iostream>
#include<cstring>
using namespace std;

string s;
int v[10];
int cif(char c)
{
    switch (c)
    {
        case '1':
        return 1;
        break;
        case '2':
        return 2;
        break;
        case '3':
        return 3;
        break;
        case '4':
        return 4;
        break;
        case '5':
        return 5;
        break;
        case '6':
        return 6;
        break;
        case '7':
        return 7;
        break;
        case '8':
        return 8;
        break;
        case '9':
        return 9;
        break;
        case '0':
        return 0;
        break;
    }
            return -1;

    }
int Max=-1;
int nr=0;

int main()
{
getline(cin,s);
for(int i=0;i<s.length();i++)
    if(cif(s[i]!=-1))
    v[cif(s[i])]++;
for(int i=0;i<=9;i++)
{
    if(v[i]==Max)
    {
        nr=min(i,nr);
    }
    if(v[i]>Max)
    {
        Max=v[i];
        nr=i;
    }


}
if(Max==0)
    cout<<"NU";
else
    cout<<nr;
}
