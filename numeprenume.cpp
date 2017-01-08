#include<iostream>
#include<cstring>

using namespace std;

char nume[105],prenume[105];
char prenume2[101];
char *ch;
int ct=0;
const string voc="aeiouAEIOU";

void remake(string pr)
{

for(int i=0;i<=strlen(prenume)-1;i++)
{
    int ok=1;
    for(int j=0;j<10;j++)
    if(prenume[i]==voc[j])
        {ok=0;
         break;}
    if(ok)
    cout<<prenume[i];

}
}

int main()
{
    cin>>nume>>prenume;
remake(prenume);
    cout<<" "<<nume;
   

}

