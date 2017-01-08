#include<fstream>
#include<cstring>
using namespace std;
ifstream fin ("prosir.in");
ofstream fout("prosir.out");
string s;
string sep (" .,?!\'\"/");
int main()
{
    getline(fin,s);
    for(int i=0;i<s.length();i++)
    {if((s[i]>='a' && s[i]<='z') &&(sep.find(s[i+1])!=string::npos))
        {s[i]='5';}}
    fout<<s;

}
