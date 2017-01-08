#include <iostream>
using namespace std;
int main(){
  int n,k,p,t;
  cin>>n>>k;
  t = n/k;
  if(n-t*k <= -(n-(t+1)*k)){
    p=t*k;
  }else{
    p=(t+1)*k;
  }
  cout<<p;
}
