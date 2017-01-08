#include <fstream>
using namespace std;
int main()
{
	ifstream fin("magic.in");
	ofstream fout("magic.out");
	int n, g = 0,i,x[10];
	char c;
	fin >> n;
	for( i = 1; i <= n; i++)
	{fin>>c;
     if('a'<= c && c <= 'z')
     {c = c - 32;
     fout<<c;}
     else
     {x[c-48]++;
     g=1;}
	}
fout<<"\n";
i = 1;
while(x[i] == 0)i++;
if(i <= 9) fout <<i, x[i] = 0;
for(i = 0; i <= 9; i++)
if(x[i]) fout << i;

	fout << "\n";
	fin.close();
	fout.close();
	return 0;
}


