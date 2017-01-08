#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, impare = 0, pare = 0;
    cin >> n;
    for(int i=1, x; i<=n; i++)
        cin >> x, (x & 1) ? impare++ : pare++;
    cout << abs(pare - impare) << '\n'; // abs(n) = n <=> daca n e negativ sau pozitiv
    return 0;
}
