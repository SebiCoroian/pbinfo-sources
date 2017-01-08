#include<iostream>
using namespace std;
int main()
{
int G,O,C,P,f1,f2=0;
cin>>C>>P;
f1=C*2;
f2=P-f1;
O=f2/2;
G=C-O;
cout<<G<<" "<<O;
return 0;
}
