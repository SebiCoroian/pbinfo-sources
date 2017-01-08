#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;
string s,cuvinte,smin,sreversed,rez;


int main()
{
    int start,stop;
    getline(cin,s);
    s+='.';

    start=0;


    while(start!=string::npos)
    {
        stop=s.find_first_of(" .,",start+1);
        smin=s.substr(start,stop-start);

        sreversed=smin;
        reverse(smin.begin(),smin.end());

        if(smin==sreversed)
            if(sreversed<rez || rez.empty())
            rez=sreversed;
        start=s.find_first_not_of(" ,.",stop+1);


    }
    if(!rez.empty())
    cout<<rez;
    else
        cout<<"IMPOSIBIL";
}
