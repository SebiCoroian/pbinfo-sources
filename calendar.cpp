#include <iostream>
using namespace std;
int main(){
  int z, l, a, chk1, chk2, chk3;
  cin>>z>>l>>a;
  chk1 = (l>0 && l<=12 && a>0 && z>0 && z<=31);
  chk2 = ( ((l==1||l==3||l==5||l==7||l==8||l==10||l==12) && z<=31) || ((l==2||l==4||l==6||l==9||l==11) && z<=30) );
  chk3 = ( l!=2 || ( ((a%400==0 || (a%4==0 && a%100!=0)) && z<=29) || (!(a%400==0 || (a%4==0 && a%100!=0)) && z<=28) ));

  if(chk1 && chk2 && chk3) cout<<"DA";
  else cout<<"NU";
}
