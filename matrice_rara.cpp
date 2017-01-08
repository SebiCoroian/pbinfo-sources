#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("matrice_rara.in");
ofstream fout("matrice_rara.out");


struct obiect
{
    int linie;
    int coloana;
    int valoare;
} a[300005],b;

obiect make_obj(int x, int y, int z)
{
    obiect o;
    o.linie=x;
    o.coloana=y;
    o.valoare=z;
    return o;
}

int comparare(obiect x,obiect y)
{
    if(x.linie<y.linie)
        return -1;
    //  if(x.linie==y.linie)
    //      return 0;
    if(x.linie>y.linie)
        return 1;

    if(x.coloana<y.coloana)
        return -1;
    if(x.coloana>y.coloana)
        return 1;
    return 0;
}

int main()
{
    int n,m,N1,N2,x,y,z,i,r,ct=0;

    fin>>n>>m>>N1>>N2;
    for(i=1; i<=N1; i++)
    {
        fin>>x>>y>>z;
        a[i]=make_obj(x,y,z);
    }
    fin>>x>>y>>z;
    b=make_obj(x,y,z);
    i=1;
    fout<<"       "<<'\n';
    while(i<=N1 && !fin.eof())
    {
        r=comparare(a[i],b);
          if(r==-1)
        {
            fout<<a[i].linie<<" "<<a[i].coloana<<" "<<a[i].valoare;
            ct++;
            i++;
            fout<<'\n';

        }
        if(r==1)
        {
            fout<<b.linie<<" "<<b.coloana<<" "<<b.valoare;
            ct++;
            fin>>x>>y>>z;
            b= {x,y,z};
            fout<<'\n';

        }
        if(r==0)
        {
            a[i].valoare+=b.valoare;
            if(a[i].valoare!=0)
            {

                fout<<a[i].linie<<" "<<a[i].coloana<<" "<<a[i].valoare;
                ct++;
                fout<<'\n';
            }
            i++;
            fin>>x>>y>>z;
            b={x,y,z};

        }

    }
    while(i<=N1 )
    {

            fout<<a[i].linie<<" "<<a[i].coloana<<" "<<a[i].valoare;
            ct++;
            i++;
            fout<<'\n';

        }
while( !fin.eof())
    {

            fout<<b.linie<<" "<<b.coloana<<" "<<b.valoare;
            ct++;
            fin>>x>>y>>z;
            b= {x,y,z};
            fout<<'\n';

        }
    fin.close();
    fout.close();

    fout.open("matrice_rara.out",ios::in|ios::out);
    fout<<ct;

}
