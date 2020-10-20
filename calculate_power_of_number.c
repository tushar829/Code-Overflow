//Using Recursion
#include<stdio.h>
int powfun(int n, int exp)
{
  if(exp==0)
  return 1;
  else if(exp==1)
  return n;
  else
  return(n * powfun(n,exp-1));
}
int main()
{
  int n , exp,result;
  scanf("%d %d",&n,&exp);
  result = powfun(n,exp);
  printf("Result = %d",result);
  return 0;
}
