#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=i;j++)
        cout<<'*';
        cout<<endl;}
        for(int i=n;i>=1;i--)
        {
            cout<<"     ";
            for(int k=0;k<=n-i;k++)
                    cout<<" ";
            for(int j=i;j>=1;j--)
            {

                cout<<"*";
            }
            cout<<endl;
        }

}
