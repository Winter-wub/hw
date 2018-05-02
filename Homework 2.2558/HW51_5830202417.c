#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char s;
	main : printf("Choose one item\n");
	printf("a. to see ants\n");
	printf("b. to see book\n");
	printf("c. to see cats\n");
	printf("d. to see dogs\n");
	printf("e. to eat\n");
	printf("f. to see food\n");
	printf("g. to see guns\n");
	printf("h. to see horse\n");
	printf("i. to exit\n");
	printf("Press :");s = getchar();
	system("cls");
	switch(s){
		case  'a' :
		case  'A' : puts("Ants");break;
		case  'b' : 
		case  'B' : puts("Books");break;
		case  'c' :
		case  'C' : puts("Cats");break;
		case  'e' :
		case  'E' : puts("Eats");break;
		case  'f' :
		case  'F' : puts("Food");break;
		case  'g' :
		case  'G' : puts("Guns");break;
		case  'h' :
		case  'H' : puts("Horse");break;
		case  'x' :
		case  'X' : puts("Good Luck"); getch(); goto main;
		default : goto main;
		
	}
}
