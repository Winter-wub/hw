/*Code by Prachayawut S09 */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void copystr();
void constr();
void lenstr();
void chrstr();
void strstr();

int main(){
	int menu;
	printf("Main menu please select menu ");
	printf("\n\n\n1.Copy string\n2.Concatention string\n3.find len in string\n4.find char in string\n5.find word in string\n\n\nany key to exit\n :::");
	scanf("%d",&menu);
	switch (menu){
		case 1 : system("cls");copystr();
		case 2 : system("cls");constr();
		case 3 : system("cls");lenstr();
		case 4 : system("cls");chrstr();
		case 5 : system("cls");strstr();
		default : printf("\nTerminate programmer ?\n press any key");system("exit");
	}
	return 0;
}
void copystr(){
	char s1[100],s2[100];
	printf("Enter string (s1) :");scanf("%s",s1);
	printf("Enter string (s2) :");scanf("%s",s2);
	printf("s1 = ""%s"" and s2 = ""%s""",s1,s2);
	printf("\nThis is copy string form variable s1 to s2");
	printf("\ns1 = %s",strcpy(s1,s2));
	printf("\npress any key to main menu");getch();system("cls");main();	
}
void constr(){
	char s1[100],s2[100];
	printf("Enter string (s1) :");scanf("%s",s1);
	printf("Enter string (s2) :");scanf("%s",s2);
	printf("s1 = ""%s"" and s2 = ""%s""",s1,s2);
	printf("\nThis is Concatention string form s1 and s2");
	printf("\nConcatention s1 and s2 = %s",strcat(s1,s2));
	printf("\npress any key to main menu");getch();system("cls");main();	
		
}
void lenstr(){
	int n,len,i;
	printf("How many string to find len ?  ::: ");
	scanf("%d",&n);
	char s[n][100];
	printf("What string to find len :");
	for(i=0;i<n;i++){
		 printf("\nNo.%d : ",i+1);scanf("%s",s[i]);	
		}
	printf("\n--------------Len Result-------------");
	for(i=0;i<n;i++){
		len = 0;
		len = strlen(s[i]);
		printf("\nNo.%d = %d",i+1,len);
	}
	printf("\npress any key to main menu");getch();system("cls");main();	
}
void chrstr(){
	char str[100],cha;
	printf("Enter string ::");
	scanf("%s",str);
	printf("Enter charater to find in string ::");
	cha = getch();
	if (strchr(str,cha) != NULL){
		printf("\n%c is found in [%s]",cha,str);
	}
	else {
		printf("\n%c isn't found in [%s]",cha,str);
	}
	printf("\npress any key to main menu");getch();system("cls");main();
}
void strstr(){
	char str1[100],str2[100];
	printf("Enter string ::");
	scanf("%s",str1);
	printf("Enter string to find in early string ::");
	scanf("%s",str2);
	if( strstr(str1,str2)!= NULL){
		printf("\nWe found %s in %s",str2,str1);
	}
	else{
		printf("\n Error not found %s in %s",str2,str1);
	}
	printf("\npress any key to main menu");getch();system("cls");main();
}
