#include <stdio.h>

int main(void){
  int max,min;
  printf("Enter a Range: ");
  scanf("%d %d",&min,&max);

  /*
    If user tries to input an integer below 2
    Ask them to input again.
  */
  while(max < 2 || min < 2){
    printf("Enter a Range greater or equal to 2 ! : ");
    scanf("%d %d",&min,&max);
  }
  // Swapping the range if input is incorrect
  if(max < min){
    int temp = max;
    max = min;
    min = temp;
  }
  /*
    sdc stands for Successful Division Count
  */
  int sdc = 0;
  for(int i = min; i <= max; i++){
    sdc = 0;
    for(int d = 2; d <= max; d++){
      if(i % d == 0){
        sdc++;
      }
      if(sdc > 1 || d > i){
        break;
      }
    }
    if(sdc == 1){
      printf("%d\n",i);
    }
  }

  return 0;
}
