#include<stdio.h>

int main(){
	int i,j;
//	printf("Please max to min");
	printf("\nPlease input number first:");
	scanf("%d", &i);
	printf("\nPlease input number last:");
	scanf("%d", &j);
	if(i>j){
	for (i;i>=j;i--){
		printf("\t%d",i);
	}
	}else{
	for (j;j>=i;j--){
		printf("\t%d",j);
	}	
	}
	getch();
	return 0;
}
