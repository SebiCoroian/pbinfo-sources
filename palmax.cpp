#include <iostream>
using namespace std;
int estePalindrom(int numar)
{
    int copie = numar, invers = 0;
    while(copie > 0)
    {
        invers = invers * 10 + copie % 10;
        copie /= 10;
    }
    if(numar == invers)
        return 1;
    return 0;
}

int main()
{
    int numar, maxPalindrom = 0, numarAparitii = 0;

    while(cin >> numar && numar != 0)
        if(estePalindrom(numar))
        {
            if(numar > maxPalindrom)
            {
                maxPalindrom = numar;
                numarAparitii = 1;
            }
            else
            {
                if(numar == maxPalindrom)
                    numarAparitii++;
            }
        }
if( maxPalindrom==0)
    cout<<"NU EXISTA";
else
{


    cout << maxPalindrom << ' ' << numarAparitii;}
    return 0;
}
