#include<stdio.h>

int main(){
	int a,b,c,j;
	char i;
	do{
	j =0;
	printf("Enter number1:");
	scanf("%d", &a);
	printf("Enter number2:");
	scanf("%d", &b);
	c = a+b;
	printf("Nunber1 %d + Number2 %d = %d",a,b,c);
	

	while (i != 'y' && i!='n'){
	printf("\nDo you want to do agin (Y or N):");
	scanf(" %c",&i);	
	}
	if(i=='y'){
		j= 1;
		i='m';
	}
	}while(j== 1);
	
	
	getch();
	return 0;
}
