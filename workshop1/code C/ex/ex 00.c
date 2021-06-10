#include<stdio.h>

main(){
	
	int grade;
	printf("Your grade: ");
	scanf("%u",&grade);
	
	if (grade <= 0){
		printf("ERROR");
	}
	else if (grade < 60){
		printf("Your grade is D");
	}
	else if (grade < 65){
		printf("Your grade is D+");
	}
	else if (grade < 70){
		printf("Your grade is C");
	}
	else if (grade < 75){
		printf("Your grade is C+");
	}
	else if (grade < 80){
		printf("Your grade is B");
	}
	else if (grade < 85){
		printf("Your grade is B+");
	}
	else if (grade < 90){
		printf("Your grade is A");
	}
	else if (grade <=100){
		printf("Your grade is A++");
	}
	else if(grade >100){
		printf("ERROR");
	}
	else {
		printf("ERROR");
	}
	
	
	getch();
	
	
	
}
