#include<fstream>
#include<math.h>
using namespace std;
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");
bool IsPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)

        if(n % i == 0) return false;

    return true;
}
int main()
{
int n,v[101],c=0;
fin>>n;
for(int i=1;i<=n;i++)
{
    fin>>v[i];
    if(IsPrime(v[i])==1)
        c++;
        if(v[i]==0 || v[i]==1)
            c--;
}
fout<<c;
fin.close();
fout.close();
}
