#include<stdio.h>
#include<conio.h>
float totalscore (int,int,int);
main(){
	int mid=0,fi=0,hw=0;
	float total;
	printf("Enter Mid-Trem score : ");scanf("%d",&mid);
	printf("Enter Final score : ");scanf("%d",&fi);
	printf("Enter Homework score : ");scanf("%d",&hw);
	printf("\n====================================================");
	printf("\n\aTotal score : %.2f",totalscore(mid,fi,hw));
	printf("\n\nPress anykey to exit");
	getch();
}
float totalscore (int mid,int fi,int hw){
	float total;
	total=((float)mid)*0.4+((float)fi)*0.5+((float)hw)*0.1;
	return total;
}
