# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    long v[6],i,j;
    for(i=1;i<=5;i++)
         cin>>v[i];
    for(i=1;i<5;i++)
      for(j=i+1;j<=5;j++)
          if(v[i]<v[j])
swap(v[i],v[j]);
    cout<<v[1]+v[2]+v[3];
    return 0;
}
