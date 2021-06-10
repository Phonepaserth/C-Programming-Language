#include<stdio.h>
#include<conio.h>

main(){
	
	int a,b;
	printf("Input your number1: ");
	scanf("%u",&a);
	
	printf("Input your number2: ");
	scanf("%u",&b);
	int c;
	for(c=a;c>=b;c--)
	{
		printf("%u\n",c);
	}
	
	getch();
	
}
