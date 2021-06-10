#include<stdio.h>
int main(){
	printf("Mr Vilaysack");
	puts("\n-------------------");
	char name[] = "Phonepaserth";
	printf("%s",name);
	puts("\n-------------------");
	char P = 'P';
	char p = 'p';
	char h = 'h';
	char o = 'o';
	char n = 'n';
	char a = 'a';
	char e = 'e';
	char r = 'r';
	char t1 = 't';
	char s1 = 's';
	
	char S = 'S';
	char A = 'A';
	char I = 'I';
	char K = 'K';
	char E = 'E';
	char O = 'O';
	char Y = 'Y';
	printf("Name is %c%c%c%c%c%c%c%c%c%c%c%c",p,h,o,n,e,p,a,s1,e,r,t1,h);
	puts("\n");
	printf("Surname is %c%c%c%c%c%c%c%c",S,I,S,A,Y,K,E,O);
	puts("\n-------------------");
	
	int s,t,f;
	printf("Input number1:");
	scanf("%d", &s);
	printf("Input number2:");
	scanf("%d", &t);
	printf("Answer is %d + %d = %d",s,t,f=s+t);
	
	getch();
	return 0;
}
