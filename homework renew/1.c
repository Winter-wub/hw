#include <stdio.h>
void main (){
	int n,sum,i;
	printf("Input value = ");
	scanf("%d",&n);
	for (i=1;i<=n;i+=2){
		printf(" %d ",i);
		sum=sum+i;
	}
	printf("\n%d",sum);
}
