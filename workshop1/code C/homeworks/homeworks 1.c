#include<stdio.h>
#include<conio.h>

main(){
	int number1,number2;
	printf("input your number1: ");
	scanf("%d",&number1);
	printf("input your number2: ");
	scanf("%d",&number2);
	int plus = number1 + number2;
	printf("Plus (+): %d \n",plus);
	int minus = number1 - number2;
	printf("Minus (-): %d\n",minus);
	int multiply = number1 * number2;
	printf("Multiply (*): %d\n",multiply);
	float divide = number1 / number2;
	float x=number1;
	float y=number2;
	float z=x/y;
	printf("Divide (/): %f\n",z);
	int modulo = number1 % number2;
	printf("Modulo (%): %d\n",divide);
	
	
	
	
	getch();
}
