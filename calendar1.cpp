#include<iostream>
using namespace std;

int main()
{
    int z, m, a;
    cin >> z >> m >> a;

    if(z == 28)
        if(m == 2) {
            if(a % 400 == 0) z++;
            else if(a % (1 << 2) == 0) {
                if(a % 100 == 0) z = 1, m++;
                else z++;
            }
            else z = 1, m++;
        }
        else z++;
    else if(z == 29)
        if(m == 2) m++, z = 1;
        else z++;
    else if(z == 30)
        if(m == 4 || m == 6 || m == 9 || m == 11) m++, z = 1;
        else z++;
    else if(z == 31)
        if(m == 12) m = 1, z = 1, a++;
        else m++, z = 1;
    else z++;

    cout << z << ' ' << m << ' ' << a << '\n';
    return 0;
}