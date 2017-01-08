#include <iostream>
using namespace std;

int main(){

int n,nr_randuri,ult_rand,i,s=0,k=1,tip_flori;
cin>>n;
nr_randuri=n/5;
ult_rand=n%5;
if(ult_rand>0){
nr_randuri=nr_randuri+1;
}
cout<<nr_randuri<<endl;
if(ult_rand==0){
cout<<"DA"<<endl;
}
else{
cout<<"NU"<<endl;
}
while(s<nr_randuri){
s=s+k;
k=k+1;

}
k=k-1;
if(k%2==1){
cout<<"micsunele";
}
else{
cout<<"panselute";
}
return 0;
}
