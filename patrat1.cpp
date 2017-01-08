#include<iostream>
using namespace std;

int main()
{
    int n;
    char c[2] {""};
    cin >> n >> c[0] >> c[1];

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << c[(j + i) % 2];
        cout << '\n';
    }

    return 0;
}
