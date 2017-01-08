#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int main()
{
    int max=0,a,x;
    while(fin>>x)
    {
        if(x==2||x==3||x==5||x==7)
        {
            if(x>max)
            {
                max=x;
                a=1;
            }
            else if(x==max)
                a++;
        }
    }
    fout<<max<<" "<<a;
    fin.close();
    fout.close();
}

