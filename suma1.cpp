#include <iostream>
using namespace std;

int main()
{
    int u = -1, p = -2, s = 0;

    while(u != p)
    {
        p = u;
        cin >> u;
        s += u;
    }

    cout << s << '\n';
    return 0;
}