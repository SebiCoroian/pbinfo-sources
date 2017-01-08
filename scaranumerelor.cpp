#include <iostream>
using namespace std;
int main() {
int64_t n,i,j;
cin>>n;
for (i=1;i<=n;i++){
    for (j=1;j<=i*i;j++){
        cout<<i;
        if (j%i==0) cout<<endl;
    }
}
return 0;
}
