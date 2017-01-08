#include<fstream>
using namespace std;
ifstream fin("maxim4.in");
ofstream fout("maxim4.out");
int main()
{
    int n,v[101],x=0;int max=0;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>v[i];
        if(v[i]>max)
        {max=v[i];
        x=0;}
        if(v[i]==max)
            x++;
    }
    
    fout<<max<<" "<<x;
fin.close();
fout.close();
}

