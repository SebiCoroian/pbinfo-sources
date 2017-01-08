#include<fstream>
#include<string>
using namespace std;
ifstream fin("paranteze1.in");
ofstream fout("paranteze1.out");
int main()
{
    long long i,n,cate;
    int leight;
    bool corect;
    string c;
    fin>>n;
    for(int j=1; j<=n; j++)
    {
        fin>>c;
        leight=c.length();
        cate=0;
        corect=1;
        for(i=0; i<leight; i++)
        {
            if(c[i]=='(')
                cate++;
            else
                cate--;
            if(cate<0)
                corect=0;
        }
        if(corect==1 && cate==0)
            fout<<1<<'\n';
        else
            fout<<0<<'\n';
    }

    fin.close();
    fout.close();
}
