#include<stdio.h>
#include<conio.h> 
main() {
	char name[30],age[2];
	printf("Enter Your 1st Name: ");gets(name);
	printf("\n\aEnter Your Age: ");gets(age);
	printf("\n\aYour name is ");puts(name);
	printf("\nYour age is ");puts(age);
	printf("\nPress any key to finish");
	getch();
}
