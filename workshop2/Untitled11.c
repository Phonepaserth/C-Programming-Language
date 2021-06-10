#include<stdio.h>

int main (){
	int s;
	char t;
	
do{
	printf("\n\n");
	system("cls");
	printf("Please Input your grade:");
	
	if (scanf("%d", &s) != 1){
		printf("only number");
		t='Y';
	}else if (s<60){
		printf("your grade is D");
	}
	else if (s<65){
		printf("your grade is D+");
	}
	else if (s<70){
		printf("your grade is C");
	}
	else if (s<75){
		printf("your grade is C+");
	}
	else if (s<80){
		printf("your grade is B");
	}
	else if (s<85){
		printf("your grade is B+");
	}
	else{
		printf("your grade is A");
	}

	printf("\n\n\n Do you want to try agin");
	t = getch();
	if (toupper(t) =='Y'){
		t='Y';
	}else{
		system("cls");
		printf("\n\n\t\tGood Bye!");
		break;
	}


	}while(toupper(t) =='Y');

		
	
	getch();
	return 0;	
	
}
