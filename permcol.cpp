#include <iostream>
using namespace std;

int n, m;
int v[101][101];

int main()
{
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> v[i][j];


 

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m-1; j++)
            swap(v[i][j], v[i][j+1]);


    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
