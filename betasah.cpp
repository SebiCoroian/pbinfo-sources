#include<fstream>
using namespace std;
ifstream fin("betasah.in");
ofstream fout("betasah.out");
int A[1001][1001],alb[1001],dx[101],dy[101];
int N,D,K,nr;

void citire()
{
    int i,x,y;
    fin>>N>>D>>K;
    for(i=1;i<=N;i++)
        alb[i]=i;
    for(i=1;i<=D;i++)
    {
        fin>>x>>y;
        A[x][y]=2;
        dx[i]=x;
        dy[i]=y;
    }
    for(i=1;i<=K;i++)
    {
        fin>>x>>y;
        A[x][y]=2;
        alb[x]--;
    }
}

void pcta()
{
    int i,m=alb[1];
    for(i=1;i<=N;i++)
    {
        if(alb[i]>m)
            m=alb[i];
    }
    fout<<m<<'\n';
}

void accesibil(int x,int y, int dx, int dy)
{
    while((x+dx>0)&&(x+dx<=N)
        &&(y+dy>0)&&(y+dy<=x+dx))
    {
        if(A[x+dx][y+dy]==0)
        {
            nr++;
            A[x+dx][y+dy]=1;
            x=x+dx;
            y=y+dy;
        }
        if(A[x+dx][y+dy]==1)
        {
            x=x+dx;
            y=y+dy;
        }
        if(A[x+dx][y+dy]==2)
            break;
    }
}

void pctb()
{
    int Dx[]={-1,-1,0,1,1, 1, 0,-1};
    int Dy[]={ 0, 1,1,1,0,-1,-1,-1};
    int i,j;
    for(i=1;i<=D;i++)
    {
        for(j=0;j<=7;j++)
          accesibil(dx[i],dy[i],Dx[j],Dy[j]);
    }
    fout<<nr;
}

int main()
{
    citire();
    pcta();
    pctb();
}