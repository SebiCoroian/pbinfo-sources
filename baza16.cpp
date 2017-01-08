#include<iostream>
using namespace std;
int nr,pf,z;
int x,y,i,i2,pi,pi2;
char r[256], q[256];
int main()
{
 cin>>nr;
 pi=nr;
 pf=nr-pi;
 i=0;i2=0;pi2=pi;
while(pi2!=0) {
 pi2=pi2/16;
 i2++;
 }
 i2--;
while(pi!=0) {
 x=pi%16;
 switch(x) {
 case 0: r[i2-i]='0'; break;
 case 1: r[i2-i]='1'; break;
 case 2: r[i2-i]='2'; break;
 case 3: r[i2-i]='3'; break;
 case 4: r[i2-i]='4'; break;
 case 5: r[i2-i]='5'; break;
 case 6: r[i2-i]='6'; break;
 case 7: r[i2-i]='7'; break;
 case 8: r[i2-i]='8'; break;
 case 9: r[i2-i]='9'; break;
 case 10: r[i2-i]='A'; break;
 case 11: r[i2-i]='B'; break;
 case 12: r[i2-i]='C'; break;
 case 13: r[i2-i]='D'; break;
 case 14: r[i2-i]='E'; break;
 case 15: r[i2-i]='F'; break;
 }
 pi=pi/16;
 i++;
 }



 cout<<r;

}
