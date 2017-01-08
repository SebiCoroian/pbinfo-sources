#include<fstream>
#include<cstring>
using namespace std;
typedef int element;
element st[1001];
ifstream f("paranteze3.in");
ofstream g("paranteze3.out");
int main()
{
    int x,n,i,varf=0,y,k=1,v[102],j;
    char s[258],t[258];
    f>>n;
    f.get();
    for(i=1; i<=n; i++)
    {
        f>>s;
        for(j=0; j<strlen(s); j++)
        {
            if(s[j]==')')                 if(s[j-1]=='(')
                {
                    strcpy(t,s+j+1);
                    strcpy(s+j-1,t);
                    j=j-2;
                    v[k]=1;
                }
                else
                {
                    v[k]=0;
                    break;
                }
            if(s[j]==']')                 if(s[j-1]=='[')
                {
                    strcpy(t,s+j+1);
                    strcpy(s+j-1,t);
                    j=j-2;
                    v[k]=1;
                }
                else
                {
                    v[k]=0;
                    break;
                }
        }
        for(y=0; y<strlen(s); y++)             if(s[y]=='('||s[y]==')')             v[k]=0;
        k++;
    }
    for(i=1; i<k; i++)         g<<v[i]<<endl;
    return 0;
}
