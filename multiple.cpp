#include <fstream>

using namespace std;

ifstream fin("multiple.in");
ofstream fout("multiple.out");

int main()
{
    int T, n, k;
    fin >> T;
    for(int i = 1; i <= T; i++)
    {
        fin >> n >> k;
        fout << n / k * k + k << '\n';
    }
    return 0;
}
