#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter anumber");
    scanf("%d",&n);
    printf("enter elements of array");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Last element of the array is %d",a[n-1]);

}
