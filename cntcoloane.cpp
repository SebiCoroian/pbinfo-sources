#include<iostream>
using namespace std;
int main()

{
    int mat[101][101],m,n,c=0,i,j,c2=0,o;
    bool corect=1;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>mat[i][j];
    for(j=1; j<=m; j++)
    {
        corect=1;
        c2=0;
        for(i=1; i<=n; i++)
        {
            for(o=1; o<=n; o++)
            {
                if(mat[o][j]==mat[i][j])
                    c2++;
            }
        }
        if(c2>n)
            corect=0;
        if(corect==1)
            c++;

    }
    cout<<c;

}
