#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game(char comp){
	char guest;
	printf("Select from s for snake , g for gun and w for water\n");
	scanf("%c",&guest);
	if(comp=='w'&&guest=='s'){
		return 0;
	}
	else if(comp=='s'&&guest=='g'){
		return 0;
	}
	else if(comp=='g'&&guest=='w'){
		return 0;
	}
	else if(comp=='s'&&guest=='g'){
		return 1;
	}
	else if(comp=='w'&&guest=='g'){
		return 1;
	}
	else if(comp=='s'&&guest=='w'){
		return 1;
	}
	else if(comp=='g'&&guest=='s'){
		return 1;
	}
	else 
	return -1;

}

int main(){

	char comp;

	srand(time(0));
	int num=rand()%100;
	if(num>33&&num<66){
		comp='s';

	}
	else if(num>66){
		comp='w';
	}
	else
	comp='g';
	printf("Computer choses %c\n",comp);
	int result=game(comp);

	if(result==0){
		printf("You win!!!!!!!!!!!!");
	}
	else if(result==1){
		printf("You Loose!!!!!!");
	}
	else
	printf("Match Draw!!!!!!");

	return 0;
}
