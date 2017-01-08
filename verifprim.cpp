#include<iostream>
using namespace std;
int main()
{
  int n,d,prim=1;
  cin>>n;
  if(n<2)
    prim=0;
  else
    prim=1;
  for(d=2;d*d<=n;d++)
    if(n%d==0)
  { prim =0;
   break;
  }
  if(prim==1)
    cout<<"DA";
  else
    cout<<"NU";
  return 0;
}