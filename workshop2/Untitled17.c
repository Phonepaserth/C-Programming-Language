#include<stdio.h>

int main (){
	int i,j,k;
	
	for (i=0;i<=10;i++){
		for (j=0;j<=10;j++){
		printf("%d x %d = %d\t",j,i,k=j*i);
		}
		puts("\n");	
	}
	puts("\n-------------\n");
	for (i=0;i<=10;i++){
		for (j=0;j<=10;j++){
		printf("%d x %d = %d\n",i,j,k=j*i);
		}
		puts("\t");	
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
	
}
