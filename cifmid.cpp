#include <iostream>
using namespace std;
int main(){
  int m,n,a,b,c;
  cin>>n;
a=n%10;
b=n/10%10;
c=n/100%10;
if((a>=b && a<=c) || (a<=b && a>=c))
    m=a;
if((b>=a && b<=c) || (b>=c && b<=a))
    m=b;
if((c>=a && c<=b) || (c<=a && c>=b))
    m=c;
    cout<<m;
}
