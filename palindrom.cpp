#include <iostream>
#include<algorithm>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");
bool palindrom(string s)
{
string copy(s);
reverse(copy.begin(), copy.end());
if(copy==s)
    return 1;
else
    return 0;
}
int main()
{
int n;
fin>>n;
string s;
int v[101];
for(int i=1;i<=n;i++)
{
    fin>>s;
    v[i]=palindrom(s);
}
for(int i=1;i<=n;i++)
    fout<<v[i]<<'\n';


}
