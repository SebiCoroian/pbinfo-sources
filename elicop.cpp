#include<fstream>

using namespace std;

ifstream fin("elicop.in");

ofstream fout("elicop.out");

int A[101][101];

int lin1[41],col1[41],lin2[41],col2[41],tip[41],albe[41],bun[41];

int m,n,k;

void citire()

{

    int i,j;

    fin>>m>>n;

    for(i=1; i<=m; i++)

        for(j=1; j<=n; j++)

            fin>>A[i][j];

    fin>>k;

    for(i=1; i<=k; i++)

    {

        fin>>lin1[i]>>col1[i]>>lin2[i]>>col2[i]>>tip[i];

    }

}



void verific(int nr)

{

    int x1,y1,x2,y2,p,xmin,xmax,ymin,ymax;

    int i,j,aux,lng;

    x1=lin1[nr];

    y1=col1[nr];

    x2=lin2[nr];

    y2=col2[nr];

    p=tip[nr];

    if(x1>x2)

    {

        aux=x1;

        x1=x2;

        x2=aux;



        aux=y1;

        y1=y2;

        y2=aux;

    }

    xmin=x1;

    xmax=x2;

    lng=xmax-xmin;

    if(y1<y2)

    {
        ymin=y1;

        ymax=y2;

    }

    else

    {

        ymin=y2;

        ymax=y1;

    }



    if((y1==ymin) && (p==1))


    {

        for(i=0; i<=lng; i++)

            for(j=i; j<=lng; j++)

            {

                if(A[xmin+i][ymin+j]==0)

                    albe[nr]++;

            }

    }




    if((y1==ymin) && (p==-1))



    {

        for(i=0; i<=lng; i++)

            for(j=0; j<=i; j++)

            {

                if(A[xmin+i][ymin+j]==0)

                    albe[nr]++;

            }

    }

    if((y1==ymax) && (p==1))

    {

        for(i=0; i<=lng; i++)

            for(j=0; j<=lng-i; j++)

            {

                if(A[xmin+i][ymin+j]==0)

                    albe[nr]++;

            }

    }

    if((y1==ymax) && (p==-1))


    {

        for(i=0; i<=lng; i++)

            for(j=lng-i; j<=lng; j++)

            {

                if(A[xmin+i][ymin+j]==0)

                    albe[nr]++;

            }

    }

    if(albe[nr]>((lng+1)*(lng+2)/4))

        bun[nr]=0;

    else

        bun[nr]=1;

}

int main()

{

    int i,nr=0,nrk=0;

    citire();

    for(i=1; i<=k; i++)

    {

        verific(i);

        if(albe[i]==0)

            nr++;

        if(bun[i]==0)

            nrk++;

    }

    fout<<nr<<'\n';

    fout<<nrk<<' ';

    for(i=1; i<=k; i++)

        if(bun[i]==0)

            fout<<i<<' ';

}
