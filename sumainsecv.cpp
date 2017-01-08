#include<fstream>
using namespace std;
ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");
int main()
{
    long v[101],a[101],n,i,j,z,x;
    fin>>n>>z;

    long S=0;
    bool OK=0;
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        fin>>v[i];
        S=S+v[i];
        a[i]=S;
    }

    for(i=1;i<=n&&OK==0;i++)
    for(j=i;j<=n;j++)
    {
        S=a[j]-a[i-1];
        if(S==z)
        {fout<<i<<" "<<j<<'\n';
        OK=1;
        break;}
    }
    if(OK==0)
        fout<<"0 0";
    fin.close();
    fout.close();
}
