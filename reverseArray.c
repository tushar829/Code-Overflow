
// Program to reverse the array 

#include<stdio.h>
int main()
{
  int *arr,n,i;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  ptr=(int *)calloc(n,sizeof(int));
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
   printf("The reverse of array is : \n");
    for(i=0;i<n;i++)
      printf("%d\n",arr[i]);

return 0;
}
