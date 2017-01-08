#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream fin("medpoz.in");
ofstream fout("medpoz.out");
int main()
{
    int a[101][101],n,i,j,contor=0;
    float s=0,m;
    fin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            fin>>a[i][j];
            if(i>j && a[i][j]>0)
            {
                s=s+a[i][j];
                contor++;
            }
        }
    if(contor==0)
    fout<<"NU EXISTA";
    else
    {   m=s/contor;
        fout<<fixed<<setprecision(3)<<m;}
    fin.close();
    fout.close();
}
