#include<stdio.h>
#include<conio.h>
main(){
	int grade;
	printf("Input your grade: ");
	scanf("%u",&grade);
	
	if(grade < 60){
		printf ("Your grade is D");
	}
	else if (grade < 65){
		printf ("Your grade is D+");
	}
	else if (grade < 70){
		printf ("Your grade is C");
	}else if (grade < 75){
		printf ("Your grade is C+");
	}else if (grade < 80){
		printf ("Your grade is B");
	}else if (grade < 85){
		printf ("Your grade is B+");
	}
	else if (grade <=100){
		printf ("Your grade is A");
	}
	else {
		printf ("ERROR");
	 
	}
	
	
	getch();
	
}
