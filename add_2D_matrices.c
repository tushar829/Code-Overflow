#include<stdio.h>
void add(int [][10],int [][10],int,int);

int a[10][10],b[10][10],r1,r2,c1,c2,i,k,j;
int main()
{
    printf("enter size of rows and columns of 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter size of rows and columns of 2nd matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("enter elements of 1st array\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("eneter elements of 2nd array");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if(r1==r2&&c1==c2)
    add(a,b,r1,c1);
    else
    printf("addition not possible\n");

}
void add(int x[10][10],int y[10][10],int p,int q)
{
    int c[10][10];
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        printf("\t%d",x[i][j]+y[i][j]);
        printf("\n");
    }

}

