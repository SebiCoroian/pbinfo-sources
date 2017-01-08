#include<fstream>
using namespace std;
ifstream fin("subnumar.in");
ofstream fout("subnumar.out");
int a[100];
int main()
{
    long long i,n,x,s;
    while(fin>>x)
    {

        while(x>=10)
        {
            s=x%100;
            a[s]++;
            x/=10;
        }
    }
    int max=0;
    for( i=10; i<100; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
for(i=99;i>=10;i--)
{
    if(a[i]==max)
        fout<<i<<" ";
}
    fin.close();
    fout.close();
}
