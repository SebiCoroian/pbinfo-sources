#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<=str.length()-1;i++)
    {
       switch(str[i])
	{
		case 'a': str[i] = toupper(str[i]); break;
        case 'e': str[i] = toupper(str[i]); break;
		case 'i': str[i] = toupper(str[i]); break;
		case 'o': str[i] = toupper(str[i]); break;
		case 'u': str[i] = toupper(str[i]); break;
		default: str[i] = str[i]; break;
	}
    }
    cout<<str;

}