#include <fstream>
using namespace std;
ifstream fin("maxim3.in");
ofstream fout("maxim3.out");
int main()
{
double a,b,c;
fin>>a>>b>>c;
if(a<b)
    swap(a,b);
if(b<c)
    swap(b,c);
if(a<b)
    swap(a,b);
fout<<a;
fin.close();
fout.close();
}

