#include<fstream>
using namespace std;
int a[11];
int i,j,n,nr,aux;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");
int main()
{
    fin>>n;
    while(fin>>aux)
        a[aux]++;

    for(i=0; i<=9; i++)
        for(j=1; j<=a[i]; j++)
        {
            fout<<i<<' ';
            nr++;
            if(nr%20==0)
            {
                fout<<'\n';
            }
        }
}