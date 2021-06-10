#include<stdio.h>
#include<conio.h>

main(){


char y = 'y',n='n';

do{
char y = 'y',n='n';
printf("Do you want to do (Yes or No): ");
scanf("%c",&y);

	if (y=='y'){
		
	int number1,number2;
	printf("Input your number1: ");
	scanf("%u",&number1);
	printf("Input your number2: ");
	scanf("%u",&number2);
	int plus = number1 + number2;
	printf("Plus (+): %d \n",plus);



}


else if (n='n'){

printf ("Play again:\n",n);	
}
	

}while(n='n');
getch();

}
