#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
double a,b,c,x1,x2,delta;
cin>>a>>b>>c;
delta=b*b-4*a*c;
if(delta<0){
cout<<"Nu are solutii reale";
}
else if(delta==0){
x1=-b/(2*a);
cout<<"Radacina dubla "  << setprecision (2) << fixed << x1;
}
else{
x1=(-b+sqrt(delta))/(2*a);
x2=(-b-sqrt(delta))/(2*a);
cout << setprecision (2) << fixed << x1 <<" "<<  setprecision (2) << fixed << x2;
}
return 0;
}

