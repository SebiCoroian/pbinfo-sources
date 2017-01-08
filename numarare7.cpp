#include <iostream> 
using namespace std; 
float v[201],a,b; 
int n,i,k; 
int main() 
{ 
  cin >>n; 
  for(i=1;i<=n;i++) cin >>v[i]; 
  a=v[1]; 
  b=v[n]; 
  if(a>b) { v[0]=a; a=b; b=v[0]; } 
  for(i=1;i<=n;i++) 
  if(v[i]<a||b<v[i]) k++; 
  cout <<k; 
  return 0; 
} 