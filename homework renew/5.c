#include <stdio.h>
void main (){
	int i,n,sum;
	scanf("%d",&n);
	for (i=n;i>=0;i-=1){
		printf(" %d ",i);
		sum=sum+i;
	}
	printf("\n%d",sum);
}
