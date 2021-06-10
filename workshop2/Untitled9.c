#include<stdio.h>
int main(){
	char name;
	printf("Please enter your first name:");
//	if (scanf(" %c", &name) != 1){
//		printf("only on character");
//	}
	name = getch();


	if(name == 's' || name == 't'){
		printf("You are my girlfriend");
	}else{
		printf("You are not my girlfriend");
		printf("\nGo away!");
	}
	
}
