#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    bool ok=0;
    string str;
    string voc="aeiouAEIOU";
    getline(cin,str);

    for(int i=0;i<=str.length()-1;i++)
    {

    if(voc.find(str[i])!=string::npos)
        ok=1;
    }
    if(ok){
    for(int i=0;i<=str.length()-1;i++)
    {
    cout<<str[i];
    if(voc.find(str[i])!=string::npos)
        cout<<"*";
    }
    }
    else
        cout<<"FARA VOCALE";


}
