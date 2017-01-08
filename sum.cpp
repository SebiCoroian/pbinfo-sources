#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("sum.in");
    ofstream out("sum.out");
int a,b;
in>>a>>b;
out<<a+b;
in.close();

    return 0;

}
