#include <stdio.h>
#define MAX 100
int d[MAX][MAX];
void dllb(int l,int si,int sj,int sn,int d[][MAX])
{
    int n,i=0,j=l/2;
    for(n = 1;n <= l*l;n++)
    {
        d[i+si][j+sj] = n + sn;
        if(n%l)
        {
            i = i ? (i-1):(l-1);
            j = (j==l-1)?0:(j+1);
        }
        else i = (i==l-1)?0:(i+1);
    }
}

void mag_odd(int l,int d[][MAX])
{
    dllb(l,0,0,0,d);
}


void mag_k(int l,int d[][MAX])
{
   int i,j;
   for(i = 0;i < l;i++)
        for(j = 0;j < l;j++)
        d[i][j] = ((i%4==0 ||i%4==3) && (j%4==0 ||j%4==3) || (i%4==1 || i%4==2) && (j%4==1 || j%4==2))?(l*l-(i*l+j)):(i*l+j+1);
}

void mag_other(int l,int d[][MAX])
{
    int i,j,t;
    dllb(l/2,0,0,0,d);
    dllb(l/2,l/2,l/2,l*l/4,d);
    dllb(l/2,0,l/2,l*l/2,d);
    dllb(l/2,l/2,0,l*l/4*3,d);
    for(i = 0;i < l/2;i++)
        for(j = 0;j < l/4;j++)
        if(i!=l/4 || j)
        {
            t = d[i][j];
            d[i][j] = d[i+l/2][j];
            d[i+l/2][j] = t;
        }
        t = d[l/4][l/4];
        d[l/4][l/4] = d[l/4+l/2][l/4];
        d[l/4+l/2][l/4] = t;
        for(i = 0;i < l/2;i++)
            for(j = l-l/4+1;j < l;j++)
            {
                t = d[i][j];
                d[i][j] = d[i+l/2][j];
                d[i+l/2][j] = t;
            }
}

void gen(int l,int d[][MAX])
{
    if(l%2) mag_odd(l,d);
    else if(l%4==0) mag_k(l,d);
    else mag_other(l,d);
}

int main()
{
    int l;
    while(~scanf("%d",&l))
    {
        gen(l,d);
        for(int i = 0;i < l;i++)
        {
            puts("");
            for(int j = 0;j < l;j++)
                printf("%3d ",d[i][j]);
        }
        puts("");
    }
    return 0;
}
