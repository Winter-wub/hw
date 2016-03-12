#include <stdio.h>
void main (){
	int n,x,i;
	scanf("%d",&n);
	for(n;n>=1;n-=1){
		i+=1;
		printf("\ninput score #%d :",i);
		scanf("%d",&x);
		if(x>=80&&x<=100){
			printf("\nGrade Good");
		}else if (x>=50&&x<80){
			printf("\nGrade Pass");
		}else if (x>=0&&x<50){
			printf("\nGrade Fail");
		}else {
			printf("\nError");
			getch();
			main();
		}
	}
}
