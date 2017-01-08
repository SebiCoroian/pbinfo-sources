#include <iostream>
using namespace std;
int main()
{
int a, b, c, S, na, nb, nc;
cin >> a >> b >> c >> S;
nc = S/c, S %= c;
nb = S/b, S %= b;
na = S/a, S %= a;
cout << na << " " << nb << " " << nc;
return 0;
}

