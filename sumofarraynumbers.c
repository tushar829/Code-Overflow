#include<stdio.h>
#include<conio.h>

int main (){
int i ,j, a,b,n,arr[20][20],h,v;
int count=0;

scanf("%d",&h);

scanf("%d",&v);

printf("enter the elements");
for (i=0;i<h;i++){
	for(j=0;i<v;j++){
		
		scanf("%d",&arr[i][j]);
		
	}
	
}
printf("\n");
for (i=0;i<h;i++){
	for(j=0;j<v;j++){
		
		printf("%d\t",arr[i][j]);
		count++;
		if(j==v-1){
            printf("\n");
		
	}
}
}


printf("number of elements = ",count);
int sum=0;
for (i=0;i<h;i++){
	for(j=0;j<v;j++){
		
		sum += arr[i][j];
		
	}
	
}
printf("\nsum of elements=%d",sum);
}
