#include <iostream>
using namespace std;

int x[5];

void afis()
{

    for(int i=0; i<5; i++) cout << x[i];
    for(int i=3; i>=0; i--) cout << x[i];
    cout << '\n';
}

void bkt(int k)
{
    for(int i=1; i<=9; i++)
    {
        x[k] = i;
        if(x[k] > x[k-1]) {
            if(k == 4) afis();
            else bkt(k+1);
        }
    }
}

int main()
{
    bkt(0);
    return 0;
}
