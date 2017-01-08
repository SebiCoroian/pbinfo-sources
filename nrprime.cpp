#include<iostream>
#include<math.h>
using namespace std;
int i,j;
int prim(int x)
{if (x < 2) return false;
  for(int i=2; i<= sqrt(x); i++) {
    if ((x%i) == 0) return false;
  }
  return true;
}

int main()
{ int m,n,a[101][101];
cin>>n;
 cin>>m;
int c=0;
for( i=1; i<=n; i++)
for( j=1; j<=m; j++)
cin>>a[i][j];
for(i=1; i<=n; i++)
for(j=1; j<=m; j++)
if(i%2==0&&prim(a[i][j])==1)
c++;
cout<<c;
return 0;
}
