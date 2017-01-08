#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], it, imin, imax, min, max;

    cin >> n;
    cin >> a[1];
    imin = imax = 1;
    min = max = a[1];

    for (it = 2; it <= n; ++it)
    {
        cin >> a[it];
        if (a[it] > max)
        {
            max = a[it];
            imax = it;
        }

        if (min > a[it])
        {
            min = a[it];
            imin = it;
        }
    }
    cout << imin << " "<< imax;
    return 0;
}
