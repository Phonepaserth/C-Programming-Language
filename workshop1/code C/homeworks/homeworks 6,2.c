#include<stdio.h>
#include<conio.h>

main(){
	int number1,number2;
	printf("CALCULATOR");	
	char answer;
	

	do{
	
	printf ("\nEnter number1: ");
	scanf("%d",&number1);
	printf ("Enter number2: ");
	scanf("%d",&number2);
	printf("%d + %d = %d \n",number1,number2,number1+number2);
	printf ("Do you want to do it agian? (Y/N)\n" );

	
	answer = getche();
	
	
	
	
	
	}while(answer== 'y'|| answer=='Y');
	
	
	
	getch();
	
}
