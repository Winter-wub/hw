#include<stdio.h>

struct student {
	char id[11];
	char fname[30];
	char lname[30];
	int year;
	char major[30];
	
};

int main(){
	struct student std;
	
	printf("Input Id:");
	scanf("%s",&std.id);
	printf("Input Firstname: ");
	scanf("%s",&std.fname);
	printf("Input Lastname: ");
	scanf("%s",&std.lname);
	printf("Input Year: ");
	scanf("%d",&std.year);
	printf("Input Major: ");
	scanf("%s",&std.major);
	////////////////////////////////
	printf("\nid: %s\n",std.id);
	printf("Firstname: %s\n",std.fname);
	printf("Lastname: %s\n",std.lname);
	printf("Year: %d\n",std.year);
	printf("Major: %s\n",std.major);
	
	
	return 0;
}
