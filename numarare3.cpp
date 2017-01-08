#include <iostream>

using namespace std;


int cmmdc(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main(void)
{
    int count = 0, n, a[1000];


    cin >> n;

    for (int i = 1; i <= n; i++){
       
        cin >> a[i];
    }

    for (int i = 1; i <= n/2; i++){
        if (a[i] != 0 && a[n-i+1] != 0)
            if (cmmdc(a[i], a[n-i+1]) == 1)
                count++;
    }

    cout << count;
    return 0;
}
