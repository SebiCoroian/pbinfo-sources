#include<iostream>
using namespace std;
int main()
{
    int a,b,aux;
    char car;
    cin>>a>>b>>car;
    if(a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    switch (car)
    {

    case '+':
     cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
        case '*':
     cout<<a*b;
        break;
        case '/':
     cout<<a/b;
        break;
        cout<<a;
    }
}

