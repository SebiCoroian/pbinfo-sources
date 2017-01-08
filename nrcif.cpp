#include <iostream>
using namespace std;
int main(){
  int n,i=1;
  cin>>n;

  
  while(n>0)
  {
      if(n/10>0)
        i++;
      n=n/10;
  }
  
  cout<<i;
}
