#include <iostream>
#include <cmath>

using namespace std;

int long long putere10( int exponent )
{
        if( exponent == 0 )
        {
                return 1;
        }
        int long long baza = 10;
        for(int i = 2; i <= exponent; i++)
        {
                baza *= 10;
        }
        return baza;
}

int long long eliminareCifra( int long long numar, int pozitie_cifra, int nr_cifre_numar )
{
        int long long putere = putere10( nr_cifre_numar - pozitie_cifra + 1 );
        return  ( numar / putere ) * ( putere / 10 ) + ( numar % ( putere / 10 ) );
}

int main()
{
        int long long numar, rest_max = 0, nr_cifre, numar_obtinut;
        cin >> numar;
        nr_cifre = (int) log10( numar ) + 1;
        for( int i = 1; i <= nr_cifre; i++ )
        {
                numar_obtinut = eliminareCifra( numar, i, nr_cifre );
                if( numar_obtinut != 0 )
                {
                        if( numar % numar_obtinut > rest_max )
                        {
                                rest_max = numar % numar_obtinut;
                        }
                }
        }
        cout << rest_max;
        return 0;
}
