#include <iostream>
using namespace std;

int n,m,a[101][101];
bool ok;
int main()
{
 cin >> n >> m;
 for(int i = 1 ; i <= n ; ++i)
  for(int j = 1 ; j <= m ; ++j)
   cin >> a[i][j];

 int cnt = 0;
 for(int i = 1 ; i <= n ; i ++)
 {
   ok = true;
  for(int j = 1 ; j <= m ; ++j)
   for(int k = j + 1 ; k <= m ; k ++)
    if(a[i][j] != a[i][k])
     ok = false;
  if(ok)
   cnt ++;
 }

 cout << cnt;

 return 0;
}
