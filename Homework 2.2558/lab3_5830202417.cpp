#include<stdio.h>
#include<conio.h>
 main (){
 	char name[50];
 	float math=0,sci=0,phy=0,result=0;
 	printf("Enter Your Name:");gets(name);
 	printf("\nEnter Math score:");scanf("%f",&math);
 	printf("\nEnter Science score:");scanf("%f",&sci);
 	printf("\nEnter Physic score:");scanf("%f",&phy);
 	printf("\n++++++++++++++++++++++++++++++++");
 	printf("\nName is %s",name);
 	printf("\nAverage score : %.2f",(math+sci+phy)/3);
 	getch();

}
