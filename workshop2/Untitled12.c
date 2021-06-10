#include<stdio.h>

int main (){
	int i;
	for (i=0;i<20;i++){
		printf("\n%d", i++);
	}
	printf("\n-----------------\n");
	for (i=0;i<20;i++){
		printf("\n%d", ++i);
	}
	printf("\n-----------------\n");
	for (i=0;i<20;i++){
		printf("\n%d", i+1);
	}
}
