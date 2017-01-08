#include <bits/stdc++.h>
using namespace std;

int k, lim;

int main()
{
    cin >> k;

    lim = sqrt(k);
    for(int x = 1; x <= lim; x++) {
        double y = sqrt(k - x * x);
        if(y == int(y) && x <= y)
            cout << x << ' ' << y << '\n';
    }
    return 0;
}