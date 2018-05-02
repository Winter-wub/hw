#include<stdio.h>
main(){
	int x[4],i,sum=0;float avg=0;
	for (i=1;i<=4;i++){
		printf("input x%d : ",i);
		scanf("%d",&x[i]);
		sum = sum+x[i];
	}
	avg = (float)sum/(sizeof(x)/sizeof(x[0]) );
	printf("Sum = %d Mean = %.2f",sum,avg);
}
