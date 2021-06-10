#include<stdio.h>

int main(){
	int a;
do{
	
	printf("\nInput only number =");
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("Yes");
			break;
		case 2:
			printf("No");
			break;
		default :
			printf("Error don't have!");
	}
}while (a == 1 || a ==2);
	getch();
	return 0;
	
}
