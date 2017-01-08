#include<fstream>
using namespace std;
ifstream fin("sumesecv.in");
ofstream fout("sumesecv.out");
int main()
{
    long v[101],a[101],n,m,i,j;
    fin>>n;
    long S=0;
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        fin>>v[i];
        S=S+v[i];
        a[i]=S;
    }
    fin>>m;
    int b,c;
    for(j=1;j<=m;j++)
    {
        fin>>b>>c;
        if(b<c)
        fout<<a[c]-a[b-1]<<" ";
        else
        fout<<a[b]-a[c-1]<<" ";
    }
    fin.close();
    fout.close();
}

