#include <iostream>

using namespace std;

bool comparare(int a, int b, int crescator)
{
    if (crescator == 1)
        return a > b;
    return a < b;
}

void ordonare(int sir[], int indice_inceput, int indice_sfarsit, int crescator)
{
    for (int i = indice_inceput; i < indice_sfarsit; i++)
    {
        for (int j = i + 1; j <= indice_sfarsit; j++)
        {
            if (comparare(sir[i], sir[j], crescator))
            {
                int aux = sir[i];
                sir[i] = sir[j];
                sir[j] = aux;
            }
        }
    }
}

int main()
{
    int nr_elem, indice_elem_maxim, sir[1001], elem_maxim;

    cin >> nr_elem;


    cin >> sir[1];
    elem_maxim = sir[1];
    indice_elem_maxim = 1;

    for (int i = 2; i <= nr_elem; i++)
    {
        cin >> sir[i];
        if (sir[i] > elem_maxim)
        {
            indice_elem_maxim = i;
            elem_maxim = sir[i];
        }
    }

    ordonare(sir, 1, indice_elem_maxim - 1, 1);
    ordonare(sir, indice_elem_maxim + 1, nr_elem, 0);

    for (int i = 1; i <= nr_elem; i++)
        cout << sir[i] << " ";

    return 0;
}
